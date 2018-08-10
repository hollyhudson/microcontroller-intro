/* 
 * tone(pin, frequency_in_Hz)
 * 
 * Things to try:
 *
 * - play a scale using the tones[] array
 * - play a simple tune
 */

const int PHOTOPIN = A1;
const int BUZZPIN = 11;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A
// 				every octave doubles the frequency

void setup()
{
	pinMode(PHOTOPIN, INPUT);
	pinMode(BUZZPIN, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	Serial.println(analogRead(PHOTOPIN));
	// values are 430 - 780
	// desired is 200 - 370 Hz, so divide by 2
	
	tone(BUZZPIN, (analogRead(PHOTOPIN)/2));	
}
