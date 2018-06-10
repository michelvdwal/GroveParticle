// -----------------------------------
// Controlling Servo over the Internet
// -----------------------------------

int led1 = D2;

void setup()
{
  pinMode(led1, OUTPUT);
}

void loop()
{
  delay(150);                       // waits 15ms for the servo to reach the position
  digitalWrite(led1, HIGH);
  delay(150);                       // waits 15ms for the servo to reach the position
  digitalWrite(led1, LOW);
}
