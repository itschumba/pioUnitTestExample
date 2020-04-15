/*
 * analog.cpp
 */

#include <Arduino.h>
#include "src/drivers/analog/analog.h"
#include "src/common/boardConfig.h"

//-----------------------------------------------------
// Start of test code
//-----------------------------------------------------

int test_analogAddition(int a, int b)
{
#ifdef ENABLE_ANALOG_READ
    return (a+b);
#else
    return 0;
#endif // ENABLE_FLASH_LED
}

//-----------------------------------------------------
// Start of code that talks to actual hardwared
//-----------------------------------------------------

/*
 * Reads value from input pin.
 *  - Ideally this should be value at potentiometer because it can vary and be displayed in serial window
 */
int testAnalogReadAndDelay(int sensorPin)
{
    int val = analogRead(sensorPin);
    delay(val);
    return val;
}
