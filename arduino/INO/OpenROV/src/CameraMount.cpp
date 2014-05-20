#include "CameraMount.h"

CameraMount::CameraMount(){
}
int CameraMount::setTilt(uint16_t microseconds)
{
	/*Set the PWM width of each direction*/
	OCR1A = microseconds;
	return 0;
}

int CameraMount::timerStop()
{
	/*Set CS12 CS11 CS10 to zero to stop timer*/
	TCCR1B &= 0xF8;
	return 0;
}
int CameraMount::timerStart()
{
	/*Set set timer CS11*/
	TCCR1B |= (1<<CS11);
	return 0;
}
int CameraMount::initialize()
{
/*CameraMount uses timer 1 to generate a 50 Hz PWM signal*/
	TCCR1A = 0;
	TCCR1B = 0;

	TCCR1A |= (1<<COM1A1)|(1<<WGM11);
	TCCR1B |= (1<<WGM13)|(1<<WGM12) |(1<<CS11);
	ICR1 = 40000; /*50Hz N = 8*/
	/*Set data direction of the Servo on PB5*/
	DDRB |= (1<<DDB5);

	/*Set PWM Width to 1500 microseconds*/
	OCR1A = 1500;
	return 0;
}

int CameraMount::update(uint16_t position)
{
	/*50Hz signal with pwm between 1 and 2 ms*/
	if(position > 999 && position <2001)
	{
		CameraMount::setTilt(position);
	}
	/*Smoothing function ? Why not PI?*/
}
