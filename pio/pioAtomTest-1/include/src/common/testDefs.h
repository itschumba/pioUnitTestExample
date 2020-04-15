/*
 * testDefs.h
 */

 #ifndef TESTDEFS_H_
 #define TESTDEFS_H_
 /*
  * @todo:: Find where the internal UNIT_TEST build build swith is defind and
  *        figure out how to use it
  *
  * @todo:: figure this out how to pass parameters to build script so that
  *         switch features can be controled fron an external source
  *
 */

 #define VK_UNIT_TEST_BUILD        1

 #ifdef VK_UNIT_TEST_BUILD
     #define LOCAL_UNIT_TEST_BUILD       1
 #else
     #define LOCAL_UNIT_TEST_BUILD       0
 #endif

 #endif // TESTDEFS_H_
