From c576281a780884f9ba1f6abe3d543a3a00f0b48d Mon Sep 17 00:00:00 2001
From: =?UTF-8?q?Ga=C3=ABl=20Bonithon?= <gael@xfce.org>
Date: Thu, 24 Aug 2023 12:50:38 +0200
Subject: [PATCH] app: Put GtkSettings:gtk-menu-bar-accel overwrite back in
 place

Fixes: 86abcfefec1c994e1fe7bb94fb615945507ba41c
Closes: #259
---
 terminal/terminal-app.c | 22 ++++++++++++++++++++++
 1 file changed, 22 insertions(+)

diff --git a/terminal/terminal-app.c b/terminal/terminal-app.c
index 46b4c300..f3aeeeac 100644
--- terminal/terminal-app.c
+++ terminal/terminal-app.c
@@ -56,6 +56,7 @@
 
 
 static void     terminal_app_finalize                 (GObject            *object);
+static void     terminal_app_update_accels            (TerminalApp        *app);
 static void     terminal_app_update_windows_accels    (gpointer            user_data);
 static gboolean terminal_app_accel_map_load           (gpointer            user_data);
 static gboolean terminal_app_accel_map_save           (gpointer            user_data);
@@ -129,12 +130,16 @@ static void
 terminal_app_init (TerminalApp *app)
 {
   app->preferences = terminal_preferences_get ();
+  g_signal_connect_swapped (G_OBJECT (app->preferences), "notify::shortcuts-no-menukey",
+                            G_CALLBACK (terminal_app_update_accels), app);
 
   /* remember the original menu bar accel */
   g_object_get (G_OBJECT (gtk_settings_get_default ()),
                 "gtk-menu-bar-accel", &app->initial_menu_bar_accel,
                 NULL);
 
+  terminal_app_update_accels (app);
+
   /* schedule accel map load and update windows when finished */
   app->accel_map_load_id = gdk_threads_add_idle_full (G_PRIORITY_LOW, terminal_app_accel_map_load, app,
                                                       terminal_app_update_windows_accels);
@@ -169,6 +174,7 @@ terminal_app_finalize (GObject *object)
     }
   g_slist_free (app->windows);
 
+  g_signal_handlers_disconnect_by_func (G_OBJECT (app->preferences), G_CALLBACK (terminal_app_update_accels), app);
   g_object_unref (G_OBJECT (app->preferences));
 
   if (app->initial_menu_bar_accel != NULL)
@@ -182,6 +188,22 @@ terminal_app_finalize (GObject *object)
 
 
 
+static void
+terminal_app_update_accels (TerminalApp *app)
+{
+  gboolean no_key;
+
+  g_object_get (G_OBJECT (app->preferences),
+                "shortcuts-no-menukey", &no_key,
+                NULL);
+  g_object_set (G_OBJECT (gtk_settings_get_default ()),
+                "gtk-menu-bar-accel",
+                no_key ? NULL : app->initial_menu_bar_accel,
+                NULL);
+}
+
+
+
 static void
 terminal_app_update_windows_accels (gpointer user_data)
 {
-- 
2.42.0

