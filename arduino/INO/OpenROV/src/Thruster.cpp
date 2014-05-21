#include "Thruster.h"

Thruster::Thruster(){
	power = true;
}
int Thruster::setValues(uint16_t vertical, uint16_t portside, uint16_t starboard)
{
	/*Set the PWM width of each direction*/
	OCR4A = vertical;	
	OCR4B = portside;	
	OCR4C = starboard;	
	return 0;
}

int Thruster::timerStop()
{
	/*Set CS42 CS41 CS40 to zero to stop timer*/
	TCCR4B &= 0xF8;
	return 0;
}
int Thruster::timerStart()
{
	/*Set set timer CS41*/
	TCCR4B |= (1<<CS41);
	return 0;
}
int Thruster::initialize()
{
/*Thrusters use timer 4 to obtain a 50 Hz PWM signal*/
	TCCR4A = 0;
	TCCR4B = 0;
	TCCR4C = 0;

	TCCR4B = TCCR4B|(1<<WGM43);
	ICR4 = 20000; /*50Hz N = 8*/
	TCCR4A |= (1<<COM4A1)|(1<<COM4B1)|(1<<COM4C1);
	TCCR4B |= (1<<CS41);
	/*Set data direction of 3 ESC */
	DDRH |= (1<<DDH3)|(1<<DDH4)|(1<<DDH5)|(1<<DDH1);

	/*Set PWM Width to 1500 microseconds*/
	OCR4A = 1500;
	OCR4B = 1500;
	OCR4C = 1500;
	return 0;
}
int Thruster::stop()
{
	/*Set Port D16 to zero to cut power to the ESCs*/
	PORTH &= ~(1<<PH1);
	power = 0;
	return 0;
}
int Thruster::start()
{
	/*Set Port D16 to one to power the ESCs*/
	PORTH |= (1<<PH1);
	power = 1;
	return 0;
}

int Thruster::update(uint16_t vertical, uint16_t portside, uint16_t starboard,bool run)
{
	if(run == 0 && power == 1){
		Thruster::stop();
	}
	else if (run == 1 && power == 0){
		Thruster::start();
		Thruster::setValues(vertical,portside,starboard);
	}
	else{
		Thruster::setValues(vertical,portside,starboard);
	}

}
