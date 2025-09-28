#include <Arduino.h>
// LED Blink on pin 13

void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as an output
}

void loop() {
  digitalWrite(13, HIGH); // Turn the LED on
  delay(1000);            // Wait for 1 second (1000 milliseconds)
  digitalWrite(13, LOW);  // Turn the LED off
  delay(1000);            // Wait for 1 second
}
