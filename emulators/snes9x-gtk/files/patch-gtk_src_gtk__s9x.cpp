--- gtk/src/gtk_s9x.cpp.orig	2026-10-04 16:39:28 UTC
+++ gtk/src/gtk_s9x.cpp
@@ -383,35 +383,35 @@ void S9xMessage(int type, int number, const char *mess
                 case S9X_TRACE:
                 case S9X_DEBUG:
                 {
-                    g_debug(message);
+                    g_debug("%s", message);
                     break;
                 }
                 case S9X_WARNING:
                 {
-                    g_warning(message);
+                    g_warning("%s", message);
                     break;
                 }
                 case S9X_INFO:
                 {
-                    g_info(message);
-                    g_message(message);
+                    g_info("%s", message);
+                    g_message("%s", message);
                     break;
                 }
                 case S9X_ERROR:
                 {
                     // GLib’s g_critical() does not terminate the process
-                    g_critical(message);
+                    g_critical("%s", message);
                     break;
                 }
                 case S9X_FATAL_ERROR:
                 {
                     // GLib’s g_error() terminates the process
-                    g_error(message);
+                    g_error("%s", message);
                     break;
                 }
                 default:
                 {
-                    g_message(message);
+                    g_message("%s", message);
                 }
             }
         }
