--- UTC
r110506 | des | 2003-02-07 09:48:27 -0600 (Fri, 07 Feb 2003) | 4 lines

Set the ruid to the euid at startup as a workaround for a bug in pam_ssh.

r226103 | des | 2011-10-07 08:10:16 -0500 (Fri, 07 Oct 2011) | 5 lines

Add a -x option that causes ssh-agent(1) to exit when all clients have
disconnected.

--- ssh-agent.c.orig	2023-02-02 04:21:54.000000000 -0800
+++ ssh-agent.c	2023-02-03 10:55:34.277561000 -0800
@@ -188,11 +188,28 @@ static int restrict_websafe = 1;
 /* Refuse signing of non-SSH messages for web-origin FIDO keys */
 static int restrict_websafe = 1;
 
+/*
+ * Client connection count; incremented in new_socket() and decremented in
+ * close_socket().  When it reaches 0, ssh-agent will exit.  Since it is
+ * normally initialized to 1, it will never reach 0.  However, if the -x
+ * option is specified, it is initialized to 0 in main(); in that case,
+ * ssh-agent will exit as soon as it has had at least one client but no
+ * longer has any.
+ */
+static int xcount = 1;
+
 static void
 close_socket(SocketEntry *e)
 {
 	size_t i;
+	int last = 0;
 
+	if (e->type == AUTH_CONNECTION) {
+		debug("xcount %d -> %d", xcount, xcount - 1);
+		if (--xcount == 0)
+			last = 1;
+	}
+
 	close(e->fd);
 	sshbuf_free(e->input);
 	sshbuf_free(e->output);
@@ -205,6 +222,8 @@ close_socket(SocketEntry *e)
 	memset(e, '\0', sizeof(*e));
 	e->fd = -1;
 	e->type = AUTH_UNUSED;
+	if (last)
+		cleanup_exit(0);
 }
 
 static void
@@ -1698,6 +1717,10 @@ new_socket(sock_type type, int fd)
 
 	debug_f("type = %s", type == AUTH_CONNECTION ? "CONNECTION" :
 	    (type == AUTH_SOCKET ? "SOCKET" : "UNKNOWN"));
+	if (type == AUTH_CONNECTION) {
+		debug("xcount %d -> %d", xcount, xcount + 1);
+		++xcount;
+	}
 	set_nonblock(fd);
 
 	if (fd > max_fd)
@@ -1990,7 +2013,7 @@ usage(void)
 usage(void)
 {
 	fprintf(stderr,
-	    "usage: ssh-agent [-c | -s] [-Dd] [-a bind_address] [-E fingerprint_hash]\n"
+	    "usage: ssh-agent [-c | -s] [-Ddx] [-a bind_address] [-E fingerprint_hash]\n"
 	    "                 [-O option] [-P allowed_providers] [-t life]\n"
 	    "       ssh-agent [-a bind_address] [-E fingerprint_hash] [-O option]\n"
 	    "                 [-P allowed_providers] [-t life] command [arg ...]\n"
@@ -2024,6 +2047,7 @@ main(int ac, char **av)
 	/* drop */
 	setegid(getgid());
 	setgid(getgid());
+	setuid(geteuid());
 
 	platform_disable_tracing(0);	/* strict=no */
 
@@ -2035,7 +2059,7 @@ main(int ac, char **av)
 	__progname = ssh_get_progname(av[0]);
 	seed_rng();
 
-	while ((ch = getopt(ac, av, "cDdksE:a:O:P:t:")) != -1) {
+	while ((ch = getopt(ac, av, "cDdksE:a:O:P:t:x")) != -1) {
 		switch (ch) {
 		case 'E':
 			fingerprint_hash = ssh_digest_alg_by_name(optarg);
@@ -2084,6 +2108,9 @@ main(int ac, char **av)
 				fprintf(stderr, "Invalid lifetime\n");
 				usage();
 			}
+			break;
+		case 'x':
+			xcount = 0;
 			break;
 		default:
 			usage();
