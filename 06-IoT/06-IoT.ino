/*
 * Download the libraries from:
 *      https://github.com/adafruit/Adafruit_Sensor
 *      https://github.com/adafruit/DHT-sensor-library
 * Place them in:
 *      Mac:    ~/Documents/Arduino/libraries/
 */

// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain
// edite by Holly Hudson

#include "DHT.h"
#include "secret.h" // for adafruit.io

#define DHTPIN 14     // what digital pin we're connected to

// Uncomment whatever type you're using!
//#define DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22  (AM2302), AM2321
//#define DHTTYPE DHT21   // DHT 21 (AM2301)

// Connect pin 1 (on the left) of the sensor to +5V
// NOTE: If using a board with 3.3V logic like an Arduino Due connect pin 1
// to 3.3V instead of 5V!
// Connect pin 2 of the sensor to whatever your DHTPIN is
// Connect pin 4 (on the right) of the sensor to GROUND
// Connect a 10K resistor from pin 2 (data) to pin 1 (power) of the sensor

// Initialize DHT sensor.
// Note that older versions of this library took an optional third parameter to
// tweak the timings for faster processors.  This parameter is no longer needed
// as the current DHT reading algorithm adjusts itself to work on faster procs.
DHT dht(DHTPIN, DHTTYPE);

// For adafruit.io
AdafruitIO_Feed *testHumidity = io.feed("test-humidity");
AdafruitIO_Feed *testTemp = io.feed("test-temp");

void setup() {
  	Serial.begin(9600);
  	dht.begin();
	while(! Serial);
	Serial.print("Connecting to Adafruit IO");
	io.connect();

	// wait for a connection
	while(io.status() < AIO_CONNECTED) {
		Serial.print(".");
		delay(500);
	}

	// we are connected
	Serial.println();
	Serial.println(io.statusText());
}

void loop() {
	// required here at the top for Adafruit IO to work
	io.run();

	// Don't send more data than your subscription allows
	delay(6000);

	float h = dht.readHumidity();
	// Read temperature as Celsius (the default)
	float t = dht.readTemperature();

	// Check if any reads failed and exit early (to try again).
	if (isnan(h) || isnan(t)) {
		Serial.println("Failed to read from DHT sensor!");
		return;
	}

	testHumidity->save(h);
	testTemp->save(t);

  	Serial.print(h);
	Serial.print(" ");
  	Serial.println(t);
}
