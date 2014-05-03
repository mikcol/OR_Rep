#include "MS5803_14BA.h"
MS5803_14BA::MS5803_14BA(){
	addr = I2C_ADDR_HIGH; 
	P = 10005;
	TEMP = 2000;
}
MS5803_14BA::MS5803_14BA(uint8_t address){
	addr = address; 
}
int32_t MS5803_14BA::getTemp(){
return TEMP;
}
int32_t MS5803_14BA::getPressure(){
return P;
}
void MS5803_14BA::initialize(){
	
}
void MS5803_14BA::getProm(){
/*Get C1-C6*/
uint8_t buffer[16];

I2Cdev::readBytes(addr,PROM_ADDR,PROMBYTES,buffer,20);

C1 = ((uint16_t)(buffer[2] <<8)|buffer[3])*32768;
C2 = ((uint16_t)(buffer[4] <<8)|buffer[5])*65536;
C3 = ((uint16_t)(buffer[6] <<8)|buffer[7]);
C4 = ((uint16_t)(buffer[8] <<8)|buffer[9]);
C5 = ((uint16_t)(buffer[10] <<8)|buffer[11])*256;
C6 = ((uint16_t)(buffer[12] <<8)|buffer[13]);


}
void MS5803_14BA::readTemperature(){
	uint8_t buffer[3];
	I2Cdev::writeBytes(addr,D2_512,0,0);
	delay(2);
	I2Cdev::readBytes(addr,ADC_READ,3,buffer,20);
	D2 = ((uint32_t)buffer[0]<<16)|((uint16_t)buffer[1]<<8)|(buffer[3]);
}
void MS5803_14BA::readPressure(){
	uint8_t buffer[3];
	I2Cdev::writeBytes(addr,D1_512,0,0);
	delay(2);
	I2Cdev::readBytes(addr,ADC_READ,3,buffer,20);
	D1 = ((uint32_t)buffer[0]<<16)|((uint16_t)buffer[1]<<8)|(buffer[3]);
}
void MS5803_14BA::doConversion(){
	dT = D2-C5;
	SENS = C1 + (C3*dT)/256;
	OFF = C2+ (C4*dT)/128;
	TEMP = 2000 + dT*C6/8388608;
	uint32_t tempe = pow(TEMP-2000,2);
	if(TEMP < 2000){
		T2=3*pow(dT,2)/8589934592;
		OFF2 = 1.5*tempe;
		SENS2 = 0.625*tempe;
		if(TEMP<-1500){
			tempe = pow(TEMP+1500,2); 
			OFF2 = OFF2 +7*tempe;
			SENS2 = SENS2 +4*tempe;
		}
	}
	else{
		T2 = 7*pow(dT,2)/137438953472;
		OFF2 = tempe/16;
		SENS2 = 0;
	}

	TEMP = TEMP -T2;
	OFF = OFF - OFF2;
	SENS = SENS- SENS2;
	P = (D1*SENS/2097152-OFF)/32768;
}
