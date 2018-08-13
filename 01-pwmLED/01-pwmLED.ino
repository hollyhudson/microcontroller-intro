/* Things to try:
 * 
 * - make it fade to off instead of fade to bright 
 * 
 */

const int LEDPIN = 14;

void setup()
{
	pinMode(LEDPIN, OUTPUT);
}

void loop()
{
	for (int brightness = 0; brightness < 1024; brightness++) {
		analogWrite(LEDPIN, brightness);
		delay(10);
	}
}
