# Fade an LED using PWM

The fritzing diagram and schematic are the same as project 00.  For many microcrontrollers you will need to find a PWM pin to connect the LED to.  With the Feather Huzzah, all the numbered IO pins are PWM pins, so we can leave the LED hooked up where it is.

PWM is short for pulse width modulation.  The LED is turn on and off faster than it is possible for the human eye to detect, and the longer during that pulse the LED is on rather than off, the brighter the LED will appear.

```cpp
const int LEDPIN = 14;

void setup()
{
    pinMode(LEDPIN, OUTPUT);
}

void loop()
{
    for (int brightness = 0; brightness < 255; brightness++) {
        analogWrite(LEDPIN, brightness);
        delay(10);
    }
}
```
