diff --git src/hostdependency.cc src/hostdependency.cc
index 3e040827..0e7fabce 100644
--- src/hostdependency.cc
+++ src/hostdependency.cc
@@ -17,6 +17,7 @@
 ** <http://www.gnu.org/licenses/>.
 */
 
+#include <array>
 #include "com/centreon/engine/hostdependency.hh"
 #include "com/centreon/engine/broker.hh"
 #include "com/centreon/engine/configuration/applier/state.hh"
