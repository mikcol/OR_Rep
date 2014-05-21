#include <Arduino.h>
/*Controllerboard class manages Temperature, Humidity and Battery voltage readings*/
class ControllerBoard
{
public:
ControllerBoard();
int16_t getTemperature();
int16_t getBatteryVoltage();
int16_t getHumidity();
private:
int32_t temp;
int16_t temperature;
int16_t humidity;
int16_t battery;
const static float temperature_offset = 20.5128;
const static float temperature_slope = 0.2506;
const static float humidity_offset = 23.8208;
const static float humidity_slope = 0.2329;
const static float batt_slope = 1.955;
};

