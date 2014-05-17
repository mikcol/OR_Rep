#include <ros.h>
#include <std_msgs/Int16.h>
#include <arduino_msgs/Thruster.h>
#include <arduino_msgs/Imu6.h>
#include <Wire.h>
#include <MPU6050.h>
#include "Thruster.h"
#include <utility/twi.h>
ros::NodeHandle nh;

MPU6050 accelgyro;
int16_t ax,ay,az;
int16_t gx,gy,gz;
Thruster thrust;
arduino_msgs::NavData navdat;
arduino_msgs::Commands cmd;
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
/*Function to Update commands from ROV*/
void updateCommands(const arduino_msgs::Commands& cmd_msg){
	//Update Motor Setpoints
	//Update Cameramount
	//Update Laser setpoint
	//Update Lighting
}
/*Function to update Navigation Message*/
void updateNavData(){
	//Update IMU
	//Update Temp
	//Update Depth
	//Update Humidity
}
ISR(TIMER1_OVF_vect){
	status = 1;
	TCNT1 = 64286;
}
ros::Publisher imu_pub("imu",&imu);
ros::Subscriber<arduino_msgs::Thruster> thrust_sub("thruster", thrust_cb);

void setup()
{
	Wire.begin();
	accelgyro.initialize();
	thrust.Init();
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

