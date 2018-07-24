/* 
 * - Why does the LED suddenly dim as you make it brighter?
 * - At what value does this happen?
 * - How do we make work properly? (dimmest at dimmest setting, vice versa)
 *
 */

const int LEDPIN = 11;
const int POTPIN = A1;

void setup()
{
	pinMode(LEDPIN, OUTPUT);
	pinMode(POTPIN, INPUT);
	Serial.begin(9600);
}

void loop()
{
	Serial.println(analogRead(POTPIN));

	// analogWrite(LEDPIN, analogRead(POTPIN));
	analogWrite(LEDPIN, analogRead(POTPIN)/4);
}
