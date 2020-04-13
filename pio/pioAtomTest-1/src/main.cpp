
//-----------------------------------------------------------------------------
// Include files that need to be included so that unit tests can compile
//-----------------------------------------------------------------------------
#include "mod1.h"


//-----------------------------------------------------------------------------
// Code from here on is what is actual source code. Should look famimiar!
//-----------------------------------------------------------------------------

// To get adruino specific libraries
#include <Arduino.h>

int sensorPin = A2;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup()
{
    // declare the ledPin as an OUTPUT:
    pinMode(ledPin, OUTPUT);

    // initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
}

// Monitor serial port from pio and veirify output
void loop()
{
    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);

    // read the input on analog pin 0:
    int sensorValue = analogRead(sensorPin);

    // print out the value you read:
    Serial.println(sensorValue);

    // turn the ledPin on
    digitalWrite(ledPin, HIGH);

    // stop the program for <sensorValue> milliseconds:
    delay(sensorValue);

    // turn the ledPin off:
    digitalWrite(ledPin, LOW);

    // stop the program for for <sensorValue> milliseconds:
    delay(sensorValue);
}
