#include "I2Cdev.h"


#define RESET 	0x1E
#define D1_256 	0x40
#define D1_512 	0x42
#define D1_1024 0x44
#define D1_2048 0x46
#define D1_4096 0x48
#define D2_256  0x50
#define D2_512  0x52
#define D2_1024 0x54
#define D2_2048 0x56
#define D2_4096 0x58

#define ADC_READ 0x00
#define PROM_ADDR 0xA0 

#define PROMBYTES 0x10

#define I2C_ADDR_HIGH 0x76
#define I2C_ADDR_LOW 0x77

class MS5803_14BA {

public:
MS5803_14BA();
MS5803_14BA(uint8_t address);
int32_t getTemp();
int32_t getPressure();
void initialize();
private:
void changeReg(uint8_t reg);
void getProm(); 
void readTemperature();
void readPressure();
void doConversion();
void reset();
uint8_t addr;
uint16_t C1;
uint16_t C2;
uint16_t C3;
uint16_t C4;
uint16_t C5;
uint16_t C6;

/*D1 is the ADC measured Pressure*/
uint32_t D1;
/*D2 is the ADC measured Temperature*/
uint32_t D2;

int32_t dT; 
int32_t TEMP; 
int64_t OFF;
int64_t SENS;
int32_t P;
uint32_t T2;
uint32_t OFF2;
uint32_t SENS2;
};
