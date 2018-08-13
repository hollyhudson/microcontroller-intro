/*
 * Starter code for neopixel class
 *
 * Adafruit NeoPixel library is here:  
 *  	https://github.com/adafruit/Adafruit_NeoPixel
 *
 * Place the library in:
 * 		Mac:  ~/Documents/Arduino/libraries/
 */

#include <Adafruit_NeoPixel.h>

#define PIN 14
#define NUM_PIXELS 12

Adafruit_NeoPixel strip = Adafruit_NeoPixel(
	NUM_PIXELS,
	PIN,
	NEO_GRB + NEO_KHZ800
);

void setup() {
	strip.begin();
}

void loop() {
	strip.setPixelColor(0, 0, 0, 255);
	strip.show();
}
