#include <Arduino.h>
#include <ros.h>
#include <std_msgs/Int16.h>
#include <arduino_msgs/Imu6.h>
#include <Wire.h>
#include <utility/twi.h>
void timer1_init();
void setup();
void loop();
#line 1 "src/imu6_test.ino"
//#include <ros.h>
//#include <std_msgs/Int16.h>
//#include <arduino_msgs/Imu6.h>
//#include <Wire.h>
//#include <utility/twi.h>
ros::NodeHandle nh;
int16_t ax,ay,az;
int16_t gx,gy,gz;

arduino_msgs::Imu6 imu;


bool status = 0;

ros::Publisher imu_pub("imu",&imu);

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
	nh.initNode();
	imu.header.frame_id = "/imu";
	nh.advertise(imu_pub);
	interrupts();
}

ISR(TIMER1_OVF_vect){
	status = 1;
	TCNT1 = 64286;
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

