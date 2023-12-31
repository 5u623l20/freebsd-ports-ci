--- src/3rdparty/chromium/third_party/perfetto/src/base/subprocess.cc.orig	2021-12-15 16:12:54 UTC
+++ src/3rdparty/chromium/third_party/perfetto/src/base/subprocess.cc
@@ -35,8 +35,8 @@
 #include "perfetto/base/time.h"
 #include "perfetto/ext/base/utils.h"
 
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
-    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
+#if !PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) && (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID))
 #include <sys/prctl.h>
 #endif
 
@@ -60,8 +60,8 @@ void __attribute__((noreturn)) ChildProcess(ChildProce
 // Don't add any dynamic allocation in this function. This will be invoked
 // under a fork(), potentially in a state where the allocator lock is held.
 void __attribute__((noreturn)) ChildProcess(ChildProcessArgs* args) {
-#if PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
-    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID)
+#if !PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD) && (PERFETTO_BUILDFLAG(PERFETTO_OS_LINUX) || \
+    PERFETTO_BUILDFLAG(PERFETTO_OS_ANDROID))
   // In no case we want a child process to outlive its parent process. This is
   // relevant for tests, so that a test failure/crash doesn't leave child
   // processes around that get reparented to init.
