#include <ros.h>
#include <std_msgs/Int16.h>
#include <std_msgs/Int32.h>
#include <arduino_msgs/Imu6.h>
#include <arduino_msgs/Thruster.h>
#include <Wire.h>
#include <utility/twi.h>
#include <MPU6050.h>
ros::NodeHandle nh;
int16_t ax,ay,az;
int16_t gx,gy,gz;
MPU6050 accelgyro;

arduino_msgs::Imu6 imu;
arduino_msgs::Thruster thrust;
bool status = 0;
bool run = 1;
void thrust_cb(const arduino_msgs::Thruster& cmd_msg){
	OCR4A = cmd_msg.port_h;	
	OCR4B = cmd_msg.star_h;	
	OCR4C = cmd_msg.vert;	
	run = cmd_msg.run;
	if(run == 1 && (PORTH & 0x01) != 1){
		PORTH |= (1<<DDH1);
	} 
	else{
		PORTH = 0x00;
	}
}

ros::Publisher imu_pub("imu",&imu);
ros::Subscriber<arduino_msgs::Thruster> thrust_sub("thruster", thrust_cb);
void thruster_init(){
    TCCR4A = 0;
    TCCR4B = 0;
    TCCR4C = 0;

    /* Waveform Generation Mode
    => WGM43|WGM42|WGM41|WGM40 = 1|0|0|1 */
    //TCCR4A = TCCR4A|(1<<WGM40);
    TCCR4B = TCCR4B|(1<<WGM43);
    //ICR4 = 156; /*50Hz N = 1024*/
    //ICR4 = 650; /*50Hz N = 256*/
    //ICR4 = 2500; /*50Hz N = 64*/
    ICR4 = 20000; /*50Hz N = 8*/
    /* Compare Output Mode:
    P and F Correct PWM, non-inverting mod*/
    TCCR4A = TCCR4A|(1<<COM4A1)|(1<<COM4B1)|(1<<COM4C1);
    /*Prescaler to 1024*/
    //TCCR4B = TCCR4B|(1<<CS42)|(1<<CS40);
//    TCCR4B |= (1<<CS42);
    //TCCR4B = TCCR4B|(1<<CS41)|(1<<CS40);
    TCCR4B |= (1<<CS41);

    DDRH |= (1<<DDH3)|(1<<DDH4)|(1<<DDH5)|(1<<DDH1);

    /* Set PWM Duty Cycles */
/*
    OCR4AH = 0;
    OCR4AL = 15;

    OCR4BH = 0;
    OCR4BL = 15;

    OCR4CH = 0;
    OCR4CL = 15;
*/
OCR4A = 1500;
OCR4B = 1500;
OCR4C = 1500;

PORTH |= (1<<DDH1);
}

void timer1_init(){
	//Timer Interrupt
	TCCR1A = 0;
	TCCR1B = 0;
	TCNT1 = 64286;
	TCCR1B |= (1<<CS12);
	TIMSK1 |= (1<<TOIE0);
}
void timer2_init(){
//Servo


}
void setup()
{
	noInterrupts();
	timer1_init();	
	accelgyro.initialize();
	thruster_init();
	nh.initNode();
	imu.header.frame_id = "/imu";
	nh.advertise(imu_pub);
	nh.subscribe(thrust_sub);
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
		imu.ax = ax;
		imu.ay = ay;
		imu.az = az;
		imu.gx = gx;
		imu.gy = gy;
		imu.gz = gz;
		imu.p = 100;
		imu.temperature =2000;
		imu_pub.publish(&imu);
		nh.spinOnce();
		status = 0;
	}
}

