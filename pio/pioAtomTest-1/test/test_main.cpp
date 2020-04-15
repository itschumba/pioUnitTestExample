#ifdef UNIT_TEST

#include <unity.h>
#include "test/pioAtomTest-1/mod1.h"

// Define the test
void test_mod1()
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
    TEST_ASSERT_EQUAL(mod1_get_a(&test_obj),18);
}

// Run the test
int main( int argc, char **argv)
{
    UNITY_BEGIN();

    RUN_TEST(test_mod1);

    UNITY_END();
}

#endif
