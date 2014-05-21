/*CameraMount Class utilizes PWM on timer 1 of the atmega2560 to command the position of the Camera Servo*/
#include <Arduino.h>
//#include <avr/io.h>
//#include <avr/interrupt.h>
class CameraMount {
	public:
		CameraMount();
		int initialize();
		int update(uint16_t position);
		int timerStop();
		int timerStart();
	private:
		int setTilt(uint16_t microseconds);
};

