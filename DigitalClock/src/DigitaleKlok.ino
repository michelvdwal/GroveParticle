/*
 * Project DigitaleKlok
 * Description: Test met digitale display
 * Author: Michel van der Wal
 * Date: 23 september 2017
 */

 #include <TM1637Display.h>

 #define CLK D4
 #define DIO D5

 TM1637Display displayTime(CLK,DIO);

// setup() runs once, when the device is first turned on.
void setup() {
  displayTime.setBrightness(0xff);
  Time.zone(+2.00);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  int h = Time.hour();
  int m = Time.minute();

  uint8_t segto;
  int value = 1244;
  segto = 0x80 | displayTime.encodeDigit((value / 100)%10);
  displayTime.setSegments(&segto, 1, 1);

  uint8_t data[] = {0xff, 0xff, 0xff, 0xff};

  data[0] = displayTime.encodeDigit(h / 10);
  data[1] = displayTime.encodeDigit(h % 10);
  data[2] = displayTime.encodeDigit(m / 10);
  data[3] = displayTime.encodeDigit(m % 10);
  displayTime.setSegments(data);
}
