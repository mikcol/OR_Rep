#include <ros.h>
#include <std_msgs/Int16.h>
#include <arduino_msgs/Commands.h>
#include <arduino_msgs/Thruster.h>
#include <arduino_msgs/AuxSense.h>
#include <arduino_msgs/NavData.h>
#include <Wire.h>
#include <MPU6050.h>
#include "Thruster.h"
#include "MS5803_14BA.h"
#include "ControllerBoard.h"
#include "CameraMount.h"
#include "Light.h"
#include "Laser.h"
#include <utility/twi.h>
ros::NodeHandle nh;

ControllerBoard ctrl_board;
MPU6050 accelgyro;
MS5803_14BA depth_sense;
CameraMount camera;
Thruster thrust;
Light LED;
Laser LaserLED;

int16_t ax,ay,az;
int16_t gx,gy,gz;
arduino_msgs::NavData navdat;
arduino_msgs::AuxSense auxdat;
bool run = 1;
uint8_t update_nav = 0;
uint8_t update_aux = 0;

void timer3_init(){
	//Timer Interrupt
	TCCR3A = 0;
	TCCR3B = 0;
	TCNT3 = 64286;
	TCCR3B |= (1<<CS32);
	TIMSK3 |= (1<<TOIE0);
}

/*Function to Update commands from ROV*/
void updateThruster(const arduino_msgs::Thruster& cmd_msg){
	thrust.update(cmd_msg.vert,cmd_msg.port_h,cmd_msg.star_h,cmd_msg.run);
	//Update Cameramount
	camera.update(cmd_msg.tilt);
}

void updateCommands(const arduino_msgs::Commands& cmd_msg){
	//Update Laser setpoint
	//Update Lighting
	LED.update(cmd_msg.LED_intensity);
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
	//Update Depth
	navdat.depth=depth_sense.getPressure();
}
void updateAuxSense()
{
	//Update Current
	//Update Battery Voltage
	auxdat.batt = ctrl_board.getBatteryVoltage();
	//Update Temperature
	auxdat.temperature = ctrl_board.getTemperature();
	//Update Humidity
	auxdat.humidity = ctrl_board.getHumidity();
}
ISR(TIMER3_OVF_vect){
	update_nav += 1;
	update_aux +=1;
	TCNT3 = 64286;
}
ros::Publisher nav_pub("navdat",&navdat);
ros::Publisher aux_pub("auxdat",&auxdat);
ros::Subscriber<arduino_msgs::Thruster> thrust_sub("thrust", updateThruster);
ros::Subscriber<arduino_msgs::Commands> command_sub("commands", updateCommands);

void setup()
{
	/*Initialize I2C*/
	Wire.begin();
	/*Initialize Sensors*/
	accelgyro.initialize();
	depth_sense.initialize();
	
	/*Initialize Thruster and Servo*/
	thrust.initialize();

	noInterrupts();
	timer3_init();	
	nh.initNode();
	navdat.header.frame_id = "/navdata";
	auxdat.header.frame_id = "/auxdat";
	nh.subscribe(command_sub);
	nh.advertise(nav_pub);
	nh.advertise(aux_pub);
	interrupts();
}

void loop()
{
	if(update_aux > 4){
		updateAuxSense();
		aux_pub.publish(&auxdat);
		update_aux = 0;
	}
	if(update_nav > 0){
		//Update Navigation message
		updateNavData();
		//Publish the navigation data
		nav_pub.publish(&navdat);
		nh.spinOnce();
		update_nav = 0;
	}
}

