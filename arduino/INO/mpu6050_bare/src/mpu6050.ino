#include <ros.h>
#include <std_msgs/Int16.h>
#include <arduino_msgs/Imu6.h>
#include <arduino_msgs/Thruster.h>
#include <MPU6050.h>
#include <I2Cdev.h>
#include <Wire.h>
#include <utility/twi.h>
ros::NodeHandle nh;
MPU6050 accelgyro;
int16_t ax,ay,az;
int16_t gx,gy,gz;

arduino_msgs::Imu6 imu;


bool status = 0;
int led = 13;

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
	pinMode(led,OUTPUT);
	timer1_init();	
	nh.initNode();
	imu.header.frame_id = "/imu";
	nh.advertise(imu_pub);
	accelgyro.initialize();
	//SetRate to 50 Hz
	accelgyro.setRate(159);
	interrupts();
}

ISR(TIMER1_OVF_vect){
	status = 1;
	digitalWrite(led,digitalRead(led)^1);
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
		imu_pub.publish(&imu);
		nh.spinOnce();
		status = 0;
	}
}

