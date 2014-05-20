#include <Wire.h>
#include "MS5803_14BA.h"
int32_t P,T;
MS5803_14BA depth;
void setup()
{
uint16_t *array;
Serial.begin(9600);
Serial.println("Initializing I2C");
Wire.begin();
Serial.println("Initializing MS5803_14BA");
depth.initialize();
Serial.println("Initializing Done");
/*array = depth.showProm();
Serial.print("C1:");
Serial.println(array[0]);
Serial.print("C2:");
Serial.println(array[1]);
Serial.print("C3:");
Serial.println(array[2]);
Serial.print("C4:");
Serial.println(array[3]);
Serial.print("C5:");
Serial.println(array[4]);
Serial.print("C6:");
Serial.println(array[5]);
*/
}

void loop()
{
delay(1000);
Serial.println("Temperature:");
T = depth.getTemp();
Serial.println(T);
Serial.println("Getting Pressure");
P = depth.getPressure();
Serial.print("Pressure:");
Serial.println(P);
}
