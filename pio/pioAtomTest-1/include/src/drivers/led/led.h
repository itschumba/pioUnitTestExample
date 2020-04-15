/*
 * led.h
 */


#ifndef LED_H_
#define LED_H_

int test_ledAddition(int a, int b);
void ledInit();
void ledOnAndDelay(int delayInMs);
void ledOffAndDelay(int delayInMs);

// potentiometer
int testReadAndDelay(int sensorPin);

#endif // LED_H_
