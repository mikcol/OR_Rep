#include <MPU6050.h>
#include <I2Cdev.h>
#include <Wire.h>
#include <utility/twi.h>
MPU6050 accelgyro;
int16_t ax,ay,az;
int16_t gx,gy,gz;



bool status = 0;

void timer1_init(){
	//Timer Interrupt
	TCCR1A = 0;
	TCCR1B = 0;
	TCNT1 = 64286;
	TCCR1B |= (1<<CS12);
	TIMSK1 |= (1<<TOIE0);
}
void setup()
{
	noInterrupts();
	timer1_init();	
	//SetRate to 50 Hz
	Serial.begin(57600);
	interrupts();
	
}

ISR(TIMER1_OVF_vect){
	status = 1;
	TCNT1 = 64286;
}
void loop()
{
	if(status == 1){
		accelgyro.getMotion6(&ax,&ay,&az,&gx,&gy,&gz);
		Serial.println(ax);
		status = 0;
	}
}

