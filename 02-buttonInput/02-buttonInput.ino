/* Things to try:
 * 
 * - use the internal PULLUP on the chip instead of a resistor on the board
 * 
 */

const int LEDPIN = 11;
const int BUTTONPIN = 7;

void setup()
{
	pinMode(LEDPIN, OUTPUT);
	pinMode(BUTTONPIN, INPUT);
	// pinMode(BUTTONPIN, INPUT_PULLUP);	
}

void loop()
{
	if (digitalRead(BUTTONPIN) == LOW) {
		digitalWrite(LEDPIN, HIGH);
	} else {
		digitalWrite(LEDPIN, LOW);
	}
}
