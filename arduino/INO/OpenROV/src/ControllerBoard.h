#include <Arduino.h>
/*Controllerboard class manages Temperature, Humidity and Battery voltage readings*/
class ControllerBoard
{
public:
ControllerBoard();
float getTemperature();
float getBatteryVoltage();
float getHumidity();
private:
uint16_t temp;
float temperature;
float humidity;
float battery;
};

