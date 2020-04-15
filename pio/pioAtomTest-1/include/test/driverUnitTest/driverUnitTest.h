/*
 * driverUnitTest.h
 */


#ifndef DRIVERUNITTEST_H_
#define DRIVERUNITTEST_H_

typedef struct driverUnitTest_s
{
    int result;
}driverUnitTest_t;

void driverTest_init(driverUnitTest_t *obj);

void driverTest_set_result(driverUnitTest_t *obj);
int driverTest_get_result(driverUnitTest_t *obj);

#endif // DRIVERUNITTEST_H_
