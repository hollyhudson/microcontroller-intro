/* 
 * tone(pin, frequency_in_Hz)
 * 
 * Things to try:
 *
 * - play a scale using the tones[] array
 * - play a simple tune
 */

const int BUZZPIN = 14;
const int BEAT = 100;
int tones[] = {261, 277, 294, 311, 330, 349, 370, 392, 415, 440};
//            mid C  C#   D    D#   E    F    F#   G    G#   A
// 				every octave doubles the frequency

void setup()
{
	pinMode(BUZZPIN, OUTPUT);
}

void loop()
{
	tone(BUZZPIN, 659);
	delay(BEAT * 1);
	tone(BUZZPIN, 587);
	delay(BEAT * 1);
	tone(BUZZPIN, 659);
	delay(BEAT * 4);
	tone(BUZZPIN, 440);
	delay(BEAT * 4);
	// rest
	noTone(BUZZPIN);
	delay(BEAT * 6);
	// rest
	tone(BUZZPIN, 698);
	delay(BEAT * 1);
	tone(BUZZPIN, 659);
	delay(BEAT * 1);
	tone(BUZZPIN, 698);
	delay(BEAT * 2);
	tone(BUZZPIN, 659);
	delay(BEAT * 2);
	tone(BUZZPIN, 587);
	delay(BEAT * 4);
	// rest
	noTone(BUZZPIN);
	delay(BEAT * 6);
	// rest
	tone(BUZZPIN, 659);
	delay(BEAT * 1);
	tone(BUZZPIN, 587);
	delay(BEAT * 1);
	tone(BUZZPIN, 659);
	delay(BEAT * 4);
	tone(BUZZPIN, 440);
	delay(BEAT * 4);
	// rest
	noTone(BUZZPIN);
	delay(BEAT * 6);
	// rest
	tone(BUZZPIN, 587);
	delay(BEAT * 1);
	tone(BUZZPIN, 523);
	delay(BEAT * 1);
	tone(BUZZPIN, 587);
	delay(BEAT * 2);
	tone(BUZZPIN, 523);
	delay(BEAT * 2);
	tone(BUZZPIN, 494);
	delay(BEAT * 2);
	tone(BUZZPIN, 587);
	delay(BEAT * 2);
	tone(BUZZPIN, 523);
	delay(BEAT * 6);
	// rest
	noTone(BUZZPIN);
	delay(BEAT * 6);
	// rest
}
