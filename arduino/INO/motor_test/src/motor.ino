#include <ros.h>
#include <std_msgs/Int16.h>
#include <arduino_msgs/Thruster.h>
#include <arduino_msgs/Imu6.h>
#include <Wire.h>
#include <utility/twi.h>
ros::NodeHandle nh;

int16_t ax,ay,az;
int16_t gx,gy,gz;

arduino_msgs::Imu6 imu;
arduino_msgs::Thruster thrust;
bool run = 1;
bool status = 0;

void timer1_init(){
	//Timer Interrupt
	TCCR1A = 0;
	TCCR1B = 0;
	TCNT1 = 64286;
	TCCR1B |= (1<<CS12);
	TIMSK1 |= (1<<TOIE0);
}
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
ISR(TIMER1_OVF_vect){
	status = 1;
	TCNT1 = 64286;
}
ros::Publisher imu_pub("imu",&imu);
ros::Subscriber<arduino_msgs::Thruster> thrust_sub("thruster", thrust_cb);
void thruster_init(){
    TCCR4A = 0;
    TCCR4B = 0;
    TCCR4C = 0;

    TCCR4B = TCCR4B|(1<<WGM43);
    ICR4 = 20000; /*50Hz N = 8*/
    TCCR4A = TCCR4A|(1<<COM4A1)|(1<<COM4B1)|(1<<COM4C1);
    TCCR4B |= (1<<CS41);

    DDRH |= (1<<DDH3)|(1<<DDH4)|(1<<DDH5)|(1<<DDH1);

OCR4A = 1500;
OCR4B = 1500;
OCR4C = 1500;

PORTH |= (1<<DDH1);
}

void setup()
{
	noInterrupts();
	thruster_init();
	timer1_init();	
	nh.initNode();
	imu.header.frame_id = "/imu";
	nh.subscribe(thrust_sub);
	nh.advertise(imu_pub);
	interrupts();
}

void loop()
{
	if(status == 1){
		imu.ax = 1500;
		imu.ay = -1500;
		imu.az = 3000;
		imu.gx = 200;
		imu.gy = -200;
		imu.gz = 300;
		imu_pub.publish(&imu);
		nh.spinOnce();
		status = 0;
	}
}

