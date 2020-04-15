
//-----------------------------------------------------------------------------
// Code from here on is what is actual source code. Should look famimiar!
//-----------------------------------------------------------------------------

#include <Arduino.h>                // Left in to enable setting/changing 'sensorPin' here. Ideally it should not be included this file
#include "src/common/boardConfig.h"
#include "src/drivers/led/led.h"
#include "src/drivers/serial/serial.h"
#include "src/drivers/analog/analog.h"
#include "src/module/driverTest/driverTest.h"

// Temp Global Declarations
int sensorPin = A2;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int driverTestResult = 0;


void setup()
{
    ledInit();
    serialCommInit(BAUD_RATE_9600);
}

void loop()
{
    // Read an input from an analog 'sensorPin' value set above
    sensorValue = testAnalogReadAndDelay(sensorPin);
    serialPrint(sensorValue); // Monitor serial port from pio and veirify output

    // Flashes LED light on Adruino
    ledOnAndDelay(sensorValue);
    ledOffAndDelay(sensorValue);

    // Excercise module and print out result in terminal window.
    // FYI, this will always print resutl of actual code
    driverTestResult = test_driverAddition();
    serialPrint(driverTestResult); // Monitor serial port result
}
