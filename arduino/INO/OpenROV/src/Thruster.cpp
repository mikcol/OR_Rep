#include "Thruster.h"

Thruster::Thruster(){

}
int Thruster::setValues(uint16_t vertical, uint16_t portside, uint16_t starboard)
{
	OCR4A = vertical;	
	OCR4B = portside;	
	OCR4C = starboard;	
return 0;
}

int Thruster::timerStop()
{

	TCCR4B &= 0xF8;
return 0;
}
int Thruster::timerStart()
{

	TCCR4B |= (1<<CS41);
return 0;
}
int Thruster::Init(){
/*Thrusters use timer 4 to obtain a 50 Hz PWM signal*/
	TCCR4A = 0;
	TCCR4B = 0;
	TCCR4C = 0;

	TCCR4B = TCCR4B|(1<<WGM43);
	ICR4 = 20000; /*50Hz N = 8*/
	TCCR4A |= (1<<COM4A1)|(1<<COM4B1)|(1<<COM4C1);
	TCCR4B |= (1<<CS41);

	DDRH |= (1<<DDH3)|(1<<DDH4)|(1<<DDH5);

	OCR4A = 1500;
	OCR4B = 1500;
	OCR4C = 1500;
return 0;
}
