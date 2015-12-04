/* ca_rgb.h
* A library for driving common anode RGB LEDs with Arduino
* Chris Green - 12/3/2015
*/

#ifndef ca_rgb_h
#define ca_rgb_h

#include "Arduino.h" //needed for Arduino-specific functions

class ca_rgb{
public:
	void initialize_ca(int pins[3]); //initializes LED with a pin array, PWM pins required
	void set_ca(int r, int g, int b); //sets the LED to an RGB value, 0-255
private:
	int _pins[3]; //holds the 3 Arduino digital PWM pins to drive the LED
	int _invert(int pwm); //inverts a PWM value so that it will drive common anode LEDs.  Ex: 255->0
};

#endif