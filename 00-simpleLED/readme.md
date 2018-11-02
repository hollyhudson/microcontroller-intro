# Project 00 - Make an LED blink

![fritzing diagram](00-fritzing.png)

![schematic](00-schematic.png)

```cpp
const int LEDPIN = 14;

void setup()
{
    pinMode(LEDPIN, OUTPUT);
}

void loop()
{
    digitalWrite(LEDPIN, HIGH);
    delay(500);
    digitalWrite(LEDPIN, LOW);
    delay(500);
}
```
