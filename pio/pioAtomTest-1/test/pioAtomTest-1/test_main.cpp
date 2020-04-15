#ifdef UNIT_TEST

#include <unity.h>
<<<<<<< Updated upstream:pio/pioAtomTest-1/test/pioAtomTest-1/test_main.cpp
#include "mod1.h"
=======
#include "test/example/example.h"
#include "test/driverUnitTest/driverUnitTest.h"
>>>>>>> Stashed changes:pio/pioAtomTest-1/test/test_main.cpp

//@todo:: check to see if there's ADD_TEST macro so that actual definition
//        of test can be describled in the source file to keep this file clean

// Define example test
void example_test_mod1()
{
    // Declare test object
    mod1_t test_obj;

    // Initialize
    mod1_init (&test_obj);

    // Set value and check to see if the right value was set
    mod1_set_a(&test_obj, 17);
    TEST_ASSERT_EQUAL(mod1_get_a(&test_obj),17);

    // Run process and check to see if member a changed sensorValue
    // NOTE: no set ran before we get here...
    mod1_process(&test_obj);
    TEST_ASSERT_EQUAL(mod1_get_a(&test_obj),17);
}

// Define driverUnitTest
void driverUnitTest_test()
{
    //Declare test object
    driverUnitTest_t test_obj;

    driverTest_init(&test_obj);
    driverTest_set_result(&test_obj);

    // Test will assert if a non-zero value is stored after calling test_driverAddition
    TEST_ASSERT_EQUAL(driverTest_get_result(&test_obj),0);
}

// Run the test
int main( int argc, char **argv)
{
    UNITY_BEGIN();

    RUN_TEST(example_test_mod1);
    RUN_TEST(driverUnitTest_test);

    UNITY_END();
}

#endif
