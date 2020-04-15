/*
 * serial.cpp
 */

#include <Arduino.h>
#include "src/drivers/serial/serial.h"
#include "src/common/boardConfig.h"


/*
 * Test math to sanity check env.
 */
int test_serialAddition(int a, int b)
{
#ifdef ENABLE_SERIAL_COMM
    return (a+b);
#else
    return 0;
#endif
}

/*
 * Initialize actual serial communication using Adruino drivers
 */
void serialCommInit(int baudRate)
{
    //Serial.begin(baudRate);
}


void serialPrint(int val)
{
    //Serial.println(val);
}
