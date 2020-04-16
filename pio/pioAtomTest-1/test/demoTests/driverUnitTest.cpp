/*
 * driverUnitTest.h
 */

#include "test/driverUnitTest/driverUnitTest.h"
#include "src/module/driverTest/driverTest.h"

void driverTest_init(driverUnitTest_t *obj)
{
    obj->result = 0;
}

void driverTest_set_result(driverUnitTest_t *obj)
{
    // This should return 0
    //obj->result = test_driverAddition();
}

int driverTest_get_result(driverUnitTest_t *obj)
{
    return obj->result;
}
