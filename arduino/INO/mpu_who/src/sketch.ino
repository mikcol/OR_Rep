#include <Wire.h>
#include <MPU6050.h>
uint8_t WHOM;
MPU6050 ag;
void setup()
{
ag.initialize();
Serial.begin(57600);
}

void loop()
{
WHOM = ag.getDeviceID();
Serial.print("Device ID: ");
Serial.println(WHOM,HEX);
delay(1000);
}
