/* ca_rgb.cpp
* A library for driving common anode RGB LEDs with Arduino
* Chris Green - 12/3/2015
*/

#include <ca_rgb.h>

void ca_rgb::initialize_ca(int pins[3]){ //initializes LED with a [r, g, b] pin array, (PWM pins required)
	for (int i=0; i<3; i++){
	_pins[i] = pins[i];
	analogWrite(_pins[i], 255); //initialize common anode LED to "off" state
	}
}

void ca_rgb::set_ca(int r, int g, int b){ //sets the LED to an RGB value, 0-255
	analogWrite(_pins[0], _invert(r));
	analogWrite(_pins[1], _invert(g));
	analogWrite(_pins[2], _invert(b));
}

int ca_rgb::_invert(int pwm){
	int inverted_pwm = 255;
	if(pwm <= 255 && pwm >= 0){
		inverted_pwm = 255-pwm;
	}
	return inverted_pwm;
}