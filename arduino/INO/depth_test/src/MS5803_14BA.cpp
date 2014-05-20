#include "MS5803_14BA.h"
MS5803_14BA::MS5803_14BA(){
	addr = I2C_ADDR_HIGH; 
	P = 1;
	TEMP = 2000;
}
MS5803_14BA::MS5803_14BA(uint8_t address){
	addr = address; 
}
int32_t MS5803_14BA::getTemp(){
	return TEMP;
}
void MS5803_14BA::changeReg(uint8_t reg){
Wire.beginTransmission(addr);
Wire.write(reg);
Wire.endTransmission();	
}
int32_t MS5803_14BA::getPressure(){
	MS5803_14BA::readTemperature();
	MS5803_14BA::readPressure();
	MS5803_14BA::doConversion();
return P;
}
void MS5803_14BA::initialize(){
	MS5803_14BA::getProm();	
}
void MS5803_14BA::reset(){

Wire.beginTransmission(addr);
Wire.write(RESET);
Wire.endTransmission();
}
void MS5803_14BA::getProm(){
/*Get C1-C6*/
uint16_t buffer[PROMBYTES/2];
uint8_t byteHigh,byteLow;
MS5803_14BA::reset();
delay(5);
for(int i = 0; i<PROMBYTES/2;i++){
	MS5803_14BA::changeReg(PROM_ADDR + (2*i));
	Wire.requestFrom(addr,2);
	while(Wire.available()){
	 byteHigh = Wire.read();
	 byteLow = Wire.read();
	}
	buffer[i] = (((uint16_t)byteHigh << 8) + byteLow);	
//	Serial.println(buffer[i]);
}

C1 = buffer[1];
C2 = buffer[2];
C3 = buffer[3];
C4 = buffer[4];
C5 = buffer[5];
C6 = buffer[6];
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
	dT = D2-C5*pow(2,8);
	SENS = C1*pow(2,15) + ((int32_t)C3*dT)/pow(2,8);
	OFF = C2*pow(2,16)+ (C4*dT)/pow(2,7);
	TEMP = 2000 + dT*C6/pow(2,23);
	uint32_t tempe = pow(TEMP-2000,2);
	if(TEMP < 2000){
		T2=3*pow(dT,2)/pow(2,33);
		OFF2 = 1.5*tempe;
		SENS2 = 0.625*tempe;
		if(TEMP<-1500){
			tempe = pow(TEMP+1500,2); 
			OFF2 = OFF2 +7*tempe;
			SENS2 = SENS2 +4*tempe;
		}
	}
	else{
		T2 = 7*pow(dT,2)/pow(2,37);
		OFF2 = tempe/16;
		SENS2 = 0;
	}

	TEMP = TEMP -T2;
	OFF = OFF - OFF2;
	SENS = SENS- SENS2;
	P = (D1*SENS/2097152-OFF)/32768;
}
