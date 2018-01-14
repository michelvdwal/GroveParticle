
/*
 * Project CycleThroughColors
 * Description: Example of using the ChainableRGB library for controlling a Grove RGB Led
 * Author: Michel van der Wal
 * Date: 14 jan 2018
 */

#include <ChainableLED.h>

#define NUM_LEDS 1 // if you chain multiple leds here change this value

ChainableLED leds(6, 7, NUM_LEDS); // hook up the chainable led to D6

void setup()
{
  leds.init();
}

float hue = 0.0;
boolean up = true;

void loop()
{
  for (byte i=0; i<NUM_LEDS; i++)
    leds.setColorHSB(i, hue, 1.0, 0.5); // RGB is also supported

  delay(10); // increment this if you want to cycle slower

  // cycle through all available colors in small steps

  if (up)
    hue+= 0.025;
  else
    hue-= 0.025;

  if (hue>=1.0 && up)
    up = false;
  else if (hue<=0.0 && !up)
    up = true;
}
