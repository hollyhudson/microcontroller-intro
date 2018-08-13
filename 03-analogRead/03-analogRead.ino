/* 
 * - Why does the LED suddenly dim as you make it brighter?
 * - At what value does this happen?
 * - How do we make work properly? (dimmest at dimmest setting, vice versa)
 *
 */

const int LEDPIN = 14;
const int POTPIN = A0;

void setup()
{
	pinMode(LEDPIN, OUTPUT);
	pinMode(POTPIN, INPUT);
	Serial.begin(9600);
}

void loop()
{
	int value = analogRead(POTPIN);
	Serial.println(value);

	analogWrite(LEDPIN, value);
}
