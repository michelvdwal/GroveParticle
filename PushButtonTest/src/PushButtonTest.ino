/*
 * Project LedTestDev
 * Description: Simple LED blink with button
 * Author: Michel van der Wal
 * Date: 14 jan 2018
 */

int LED = D6; // digital pin D6
int BUTTON = D2; // digital pin D2
int buttonPressed = 0; // default value for times that button is pressed
bool toggleButton = true; // var to check if the button has been clicked

// setup() runs once, when the device is first turned on.
void setup() {
  // Initialization of pinModes
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // read value of input pin
  if (digitalRead(BUTTON) == HIGH)
  {
    if (toggleButton)
    {
      buttonPressed ++;
      // turn of the trigger of the button click to avoid trigger in next loop until releasing
      toggleButton = false;
    }
    // check if button is pressed 3 times or more
    if (buttonPressed > 1)
    {
      // write outputvalues, set to high
      digitalWrite(LED, HIGH);
      buttonPressed = 0;
    }
  }
  else
  {
    // write outputvalues, set back to low
    digitalWrite(LED, LOW);
    // button has been released, so trigger can be catched again in next loop
    toggleButton = true;
  }
}
