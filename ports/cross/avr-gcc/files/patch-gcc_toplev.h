--- gcc/toplev.h.ORIG	2012-02-23 14:27:02.000000000 +0100
+++ gcc/toplev.h	2012-02-23 14:27:28.000000000 +0100
@@ -172,18 +172,6 @@
 #  define CLZ_HWI __builtin_clz
 #  define CTZ_HWI __builtin_ctz
 # endif
-
-extern inline int
-floor_log2 (unsigned HOST_WIDE_INT x)
-{
-  return x ? HOST_BITS_PER_WIDE_INT - 1 - (int) CLZ_HWI (x) : -1;
-}
-
-extern inline int
-exact_log2 (unsigned HOST_WIDE_INT x)
-{
-  return x == (x & -x) && x ? (int) CTZ_HWI (x) : -1;
-}
 #endif /* GCC_VERSION >= 3004 */
 
 /* Functions used to get and set GCC's notion of in what directory
