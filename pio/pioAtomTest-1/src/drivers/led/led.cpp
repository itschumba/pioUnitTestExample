/*
 * led.cpp
 */

#include <Arduino.h>
#include "src/drivers/led/led.h"
#include "src/common/boardConfig.h"

// select the pin for the LED
#define LED_PIN      13

int test_ledAddition(int a, int b)
{
#ifdef ENABLE_FLASH_LED
    return (a+b);
#else
    return 0;
#endif // ENABLE_FLASH_LED
}

/*
 * Initialize actual serial communication using Adruino drivers
 */
void ledInit()
{
    // declare the ledPin as an OUTPUT:
    pinMode(LED_PIN, OUTPUT);
}

void ledOnAndDelay(int delayInMs)
{
    // turn the ledPin on
    digitalWrite(LED_PIN, HIGH);
    delay(delayInMs);

}

void ledOffAndDelay(int delayInMs)
{
    // turn the ledPin on
    digitalWrite(LED_PIN, LOW);
    delay(delayInMs);
}
