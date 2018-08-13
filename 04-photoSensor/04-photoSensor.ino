/* 
 * tone(pin, frequency_in_Hz)
 * 
 * Things to try:
 *
 * - make sure that your min and max values are what you are seeing as output
 * - play a scale using the tones[] array
 * - play a simple tune
 */

const int PHOTOPIN = A0;
const int BUZZPIN = 14;
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
	int value = analogRead(PHOTOPIN);
	Serial.println(value);
	// values are 100 - 1000
	// desired is 200 - 500 Hz
	// we need code to scale the values to match the frequencies we want

	// map( current_value, min_value, max_value, min_desired, max_desired)
	int tone_freq = map(value, 100, 1000, 200, 500);
	
	tone(BUZZPIN, tone_freq);	
}
