/*
 * Project LedTestDev
 * Description: Simple LED blink with button
 * Author: Michel van der Wal
 * Date: 14 jan 2018
 */

#define LED1 7 // onboard blue led of Duo
#define LED2 6 // digital pin D6
#define BUTTON 2 // digital pin D2

int fadeValue = 20; // value from 0 to 255 for brightness, can also be set to HIGH

// setup() runs once, when the device is first turned on.
void setup() {
  // Initialization of pinModes
  pinMode(BUTTON, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // read value of input pin
  if (digitalRead(BUTTON) == HIGH)
  {
    // write outputvalues, analog by passing fadeValue or digital by passing HIGH or LOW
    analogWrite(LED1, fadeValue);
    digitalWrite(LED2, HIGH);
  }
  else
  {
    // write outputvalues
    analogWrite(LED1, 0);
    digitalWrite(LED2, LOW);
  }
}
