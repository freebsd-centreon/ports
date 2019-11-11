diff --git src/retention/object.cc src/retention/object.cc
index a67ddde6..654fa333 100644
--- src/retention/object.cc
+++ src/retention/object.cc
@@ -17,7 +17,7 @@
 ** <http://www.gnu.org/licenses/>.
 */
 
-
+#include <array>
 #include "com/centreon/engine/retention/comment.hh"
 #include "com/centreon/engine/retention/contact.hh"
 #include "com/centreon/engine/retention/downtime.hh"
