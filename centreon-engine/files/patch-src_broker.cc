diff --git src/broker.cc src/broker.cc
index 260e985b..3af9b244 100644
--- src/broker.cc
+++ src/broker.cc
@@ -19,6 +19,7 @@
 ** <http://www.gnu.org/licenses/>.
 */
 
+#include <mutex>
 #include <memory>
 #include <unistd.h>
 #include "com/centreon/engine/broker.hh"
