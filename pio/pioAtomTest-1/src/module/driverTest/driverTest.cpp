/*
 * driverTest.cpp
 */

 // NOTE: No Adruino include here
#include "src/module/driverTest/driverTest.h"
#include "src/drivers/analog/analog.h"
#include "src/drivers/led/led.h"
#include "src/drivers/serial/serial.h"
#include "src/common/boardConfig.h"

/*
 * Purpose of this function is to prove that we can switch on/off features
 * easily
*/
// @todo:: figure out how to get UNIT_TEST to work
//#ifdef UNIT_TEST
/*
 int test_driverAddition (void)
 {
    return 0;
 }
 */
// #else
 int test_driverAddition (void)
 {
    int result = 0;
    result =  test_serialAddition(1,2);
    result += test_ledAddition(3,4);
    result += test_analogAddition(5,6);
    return result;
 }
//#endif
