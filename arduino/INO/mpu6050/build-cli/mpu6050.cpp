#include <Arduino.h>
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
arduino_msgs::Thruster thrust;


bool status = 0;
int led = 13;
void thrust_cb(const arduino_msgs::Thruster& cmd_msg){
	OCR4AL = cmd_msg.port_h;	
	OCR4BL = cmd_msg.star_h;	
	OCR4CL = cmd_msg.vert;	
}

ros::Publisher imu_pub("imu",&imu);
ros::Subscriber<arduino_msgs::Thruster> thrust_sub("thruster", thrust_cb);

void thruster_init(){
    TCCR4A = 0;
    TCCR4B = 0;
    TCCR4C = 0;

    /* Waveform Generation Mode
    Fast PW, 8-bit, TOP = 0x00FF, Update OCR3x at BOTTOM, TOV3 Flag Set on TOP
    => WGM33|WGM32|WGM31|WGM30 = 0|1|0|1 */
    TCCR4A = TCCR4A|(1<<WGM30);
    TCCR4B = TCCR4B|(1<<WGM32);

    /* Compare Output Mode:
    Fast PWM, non-inverting mode
    => COM3A1|COM3A0|COM3B1|COM3B0|COM3C1|COM3C0 = 1|0|1|0|1|0*/
    TCCR4A = TCCR4A|(1<<COM3A1)|(1<<COM3B1)|(1<<COM3C1);

    /* Clock Select: clk/1024 => CS32|CS31|CS30 = 1|1|1 */
    TCCR4B = TCCR4B|(1<<CS42)|(1<<CS40);

    /* Set Timer3 pins as output :
    Channel A : Digital Pin 5 / Chip Pin 5 (PE3/OC3A/AIN1)
    Channel B : Digital Pin 2 / Chip Pin 6 (PE4/OC3B/INT4)
    Channel C : Digital Pin 3 / Chip Pin 7 (PE5/OC3C/INT5)*/
    DDRH |= (1<<DDH3)|(1<<DDH4)|(1<<DDH5);

    /* Set PWM Duty Cycles */
    OCR4AH = 0;
    OCR4AL = 250;

    OCR4BH = 0;
    OCR4BL = 250;

    OCR4CH = 0;
    OCR4CL = 250;
}

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
	nh.subscribe(thrust_sub);
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

