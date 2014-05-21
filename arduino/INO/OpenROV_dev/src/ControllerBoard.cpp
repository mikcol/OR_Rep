#include "ControllerBoard.h"

ControllerBoard::ControllerBoard()
{
}
/*Lazy Implementation: arduino ADC read*/
int16_t ControllerBoard::getTemperature(){
/*T = (V_ref/res*bits - offset)/slope*/
	temperature =(int16_t)(temperature_slope*(float)analogRead(A8)-temperature_offset)*100;
	//temperature = (int16_t)temp;
	return temperature;
}

int16_t ControllerBoard::getHumidity(){
	humidity =(int16_t)(humidity_slope*(float)analogRead(A7)-humidity_offset)*100;
	/*Temperature Compensation*/
	//humidity = (int16_t)temp;
	return humidity;
}

int16_t ControllerBoard::getBatteryVoltage(){
	//temp =  (analogRead(A4)*1955)/1000;
battery = (int16_t)(1.955*(float)analogRead(A4));
	//battery = analogRead(A4);
//	battery = 0x00FF & temp;
	return battery;
}

