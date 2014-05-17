#include "Thruster.h"
void Thruster::setValues(uint16_t vertical, uint16_t portside, uint16_t starboard){
	OCR4A = cmd_msg.port_h;	
	OCR4B = cmd_msg.star_h;	
	OCR4C = cmd_msg.vert;	
}

void Thruster::timerStop(){

	TCCR4B &= 0xF8;

}
void Thruster::timerStart(){

	TCCR4B |= (1<<CS41);

}
void Thruster::Init(){
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
}
