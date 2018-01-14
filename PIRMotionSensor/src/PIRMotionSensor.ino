#define SENSOR 2
#define LED 6

void setup()
{
  pinMode(SENSOR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop()
{
  if (digitalRead(SENSOR) == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
