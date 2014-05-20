#include "ControllerBoard.h"

ControllerBoard::ControllerBoard()
{
}
/*Lazy Implementation: arduino ADC read*/
float ControllerBoard::getTemperature(){
/*T = (V_ref/res*bits - offset)/slope*/
	temp = analogRead(A8);	
	temperature = 0.2506*(float)temp-20.5128;
	return temperature;
}

float ControllerBoard::getHumidity(){
	temp = analogRead(A7);
	humidity = 0.0210*(float)temp-23.8208;
	/*Temperature Compensation*/
	return humidity;
}

float ControllerBoard::getBatteryVoltage(){
	temp =  analogRead(A4);
	battery = (float)temp*0.0195;
	return battery;
}

