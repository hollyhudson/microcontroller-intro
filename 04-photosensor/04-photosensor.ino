/* Things to try:
 * 
 * 
 * 
 */

const int PHOTOPIN = 12;

void setup()
{
	pinMode(PHOTOPIN, INPUT);
}

void loop()
{
	println(analogRead(PHOTOPIN));
	delay(100);
}
