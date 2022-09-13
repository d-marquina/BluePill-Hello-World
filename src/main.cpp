/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

#include <Arduino.h>

#ifndef LED_BUILTIN
  #define LED_BUILTIN PC13
#endif

void setup()
{
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  // initialize Serial over USB-CDC
  SerialUSB.begin(9600);
}

void loop()
{
  // turn the LED on (LOW is the inverted voltage level)
  digitalWrite(LED_BUILTIN, LOW);
  // print to serial monitor
  SerialUSB.println("Hello World");
  // wait for a second
  delay(5000);
  // turn the LED off by making the voltage HIGH
  digitalWrite(LED_BUILTIN, HIGH);
   // wait for a second
  delay(1000);
}