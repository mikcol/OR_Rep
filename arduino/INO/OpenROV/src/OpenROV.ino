#include <ros.h>
#include <std_msgs/Int16.h>
#include <arduino_msgs/Commands.h>
#include <arduino_msgs/NavData.h>
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
	if(cmd_msg.run == 0){
		thrust.stop();
	}
	else{
		thrust.setValues(cmd_msg.vert,cmd_msg.port_h,cmd_msg.star_h);
	}
	//Update Cameramount
	//Update Laser setpoint
	//Update Lighting
}
/*Function to update Navigation Message*/
void updateNavData(){
	//Update IMU
	accelgyro.getMotion6(&ax,&ay,&az,&gx,&gy,&gz);
	navdat.ax = ax;
	navdat.ay = ay;
	navdat.az = az;
	navdat.gx = gx;
	navdat.gy = gy;
	navdat.gz = gz;
	//Update Temp
	//Update Depth
	//Update Humidity
}
ISR(TIMER1_OVF_vect){
	status = 1;
	TCNT1 = 64286;
}
ros::Publisher nav_pub("navdat",&navdat);
ros::Subscriber<arduino_msgs::Commands> command_sub("commands", updateCommands);

void setup()
{
	Wire.begin();
	accelgyro.initialize();
	thrust.Init();
	noInterrupts();
	timer1_init();	
	nh.initNode();
	navdat.header.frame_id = "/navdata";
	nh.subscribe(command_sub);
	nh.advertise(nav_pub);
	interrupts();
}

void loop()
{
	if(status == 1){
		//Update Navigation message
		updateNavData();
		//Publish the navigation data
		nav_pub.publish(&navdat);
		nh.spinOnce();
		status = 0;
	}
}

