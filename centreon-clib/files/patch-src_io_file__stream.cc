--- src/io/file_stream.cc	2018-09-03 10:09:50.000000000 +0000
+++ src/io/file_stream.cc.orig	2018-12-31 12:39:12.280922000 +0000
@@ -337,10 +337,12 @@
  *  @return Temporary name.
  */
 char* file_stream::temp_path() {
-  char* ret(::tmpnam(static_cast<char*>(NULL)));
-  if (!ret)
+  //char* ret(::tmpnam(static_cast<char*>(NULL)));
+  char tmpfile[] = "/tmp/efstd.XXXXXX";
+  int ret = mkstemp(tmpfile);
+  if (ret == -1)
     throw (basic_error() << "could not generate temporary file name");
-  return (ret);
+  return (tmpfile);
 }
 
 /**
