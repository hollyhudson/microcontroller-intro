# Intro to Microcontrollers

Download driver:  https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/using-arduino-ide

## Basic Electronic Theory

* Volts: The pressure of a charge or electrons that want to move through a circuit, as measured in the force required to hold back the charged particles (potential energy measured in Joules) times the number of charged particles (electrons) measured in Coulombs.

* Amps:  (Current, I) Rate of flow of charge measured in electrons (Coulombs) per sec.

* Resistance:  Amount of resistance to electron flow, measured in Ohms.  Resistors limit amperage, but not voltage.

```
V = I x R
```

Since you are usally powering your circuit with a source with a stable voltage (for instance a 9V battery), the amount of current flowing through the circuit depends on the amount of resistance provided by components in the circuit.

If there is a lot of resistance, the current (amps, I in the equation)
will be low.  

Current is the same everywhere in a circuit.

Voltage is not the same everywhere in a circuit, it is always the voltage of the power supply at the beginning of the circuit, and 0V at ground.  Voltage drops across components, but it remains the same across the entire length of a wire.

## Projects

* [00-simpleLED](00-simpleLED/readme.md) Wire up an LED and write code to make it blink.
* [01-pwmLED](01-pwmLED/readme.md) Use pulse width modulation to fade an LED.
* [02-buttonInput](02-buttonInput/readme.md) Use a button to light an LED.
* [03-analogRead](03-analogRead/readme.md) Use a potentiometer as an analog input.
* [04-photoSensor](04-photoSensor/readme.md) Make a light theramin, using a photocell as the analog input, and a buzzer as the analog output.
* [05-servos](05-servos/readme.md) Move a servo with buttons.

## Microcontrollers

![Adafruit Feather Huzzah](docs/media/adafruit_products_Huzzah_ESP8266_Pinout_v1.2-1.png)

* Adafruit Feather Huzzah 8266
	* pinout: https://learn.adafruit.com/adafruit-feather-huzzah-esp8266/pinouts
	* product page: https://www.adafruit.com/product/2821
	* tutorial page: https://learn.adafruit.com/adafruit-feather-huzzah-esp8266
	* kit with parts: https://www.adafruit.com/product/2680



## Accessories

* [Prototyping Boards](docs/prototyping_boards.md)

## Components

### Input

#### Binary Switches (and Buttons)

Image | Name | Supplier's Info | Symbol | Eagle Part | More Info 
----- | ---- | --------------- | ------ | ---------- | ---------
![slide switch](docs/media/switch_slide_spdt.jpg) |  Slide Switch | [Adafruit documentation](https://www.adafruit.com/product/805) | ![SPDT switch symbol](docs/media/symbol_switch_spdt.png) | |
![magnetic contact switch](docs/media/switch_mag_door.jpg) | Magnetic Contact Switch (Door Sensor) | [Adafruit documentation](https://www.adafruit.com/product/375) |
![button](docs/media/button_sm.jpg) | Momentary Tactile Switch Button | [Adafruit documentation](https://www.adafruit.com/product/1119) | ![button symbol](docs/media/symbol_switch_momentary_button.png) | switch-omron:B3F-40XX | ![button schematic](docs/media/button_schematic.png) 

#### Analog Switches

Image | Name | Supplier's Info | Symbol | Eagle Part | More Info 
----- | ---- | --------------- | ------ | ---------- | ---------
![trim potentiometer](docs/media/potentiometer_trim.jpg) | Trim Potentiometer | [Adafruit documentation](https://www.adafruit.com/product/356) | ![potentiometer symbol](docs/media/potentiometer_symbol.png) | | ![potentiometer internals](docs/media/potentiometer_internal.png) 
![temperature and humidity sensor](docs/media/sensor_temp_humidity.jpg) | Temperature and Humidity Sensor | [Adafruit documentation](https://www.adafruit.com/product/385) | | |
* [Motion Sensors]
* [Light Sensors]
* [Sound Sensors]

### Output

#### Light

Image | Name | Supplier's Info | Symbol | Eagle Part | More Info 
----- | ---- | --------------- | ------ | ---------- | ---------
![RGB LEDs](docs/media/led_rgb.jpg) | RGB LEDs | [Adafruit documentation](https://www.adafruit.com/product/159) | ![LED symbol](docs/media/symbol_led.png) | |

#### Sound

Image | Name | Supplier's Info | Symbol | Eagle Part | More Info 
----- | ---- | --------------- | ------ | ---------- | ---------
![buzzer](docs/media/buzzer_piezo.jpg) | Buzzer | [Adafruit documentation](https://www.adafruit.com/product/160) | ![buzzer symbol](docs/media/buzzer_symbol.jpg) | |

#### Motion

Image | Name | Supplier's Info | Symbol | Eagle Part | More Info 
----- | ---- | --------------- | ------ | ---------- | ---------
![micro server](docs/media/servo_micro.jpg) | Micro Servo | [Adafruit documentation](https://www.adafruit.com/product/169) | | |

### Neither

* [Resistors]
* [Capacitors]
* [Diodes]

## Image credits:

* [potentiometers from build-electronic-circuits.com](https://www.build-electronic-circuits.com/potentiometer/)
