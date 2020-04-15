/*
 * testDefs.h
 */

 #ifndef TESTDEFS_H_
 #define TESTDEFS_H_
 /*
  * It's taking me too much time to find where the internal UNIT_TEST build
  * switch is defined so that I can figure out how to toggle it from this level
  *
  * @todo:: figure this out so that the atumoation environment doesn't have to
  *         pass this into the build script?
  *
  * possible sol: may not be hard so maybe just have an argument passed that
  *               flips this swithc?
 */

 #define VK_UNIT_TEST_BUILD        1

 #ifdef VK_UNIT_TEST_BUILD
     #define LOCAL_UNIT_TEST_BUILD       1
 #else
     #define LOCAL_UNIT_TEST_BUILD       0
 #endif

 #endif // TESTDEFS_H_
