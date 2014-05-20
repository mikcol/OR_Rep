#include <Arduino.h>

class Laser {
public:
Laser();
Laser(uint8_t pin_num);
uint8_t initialize();
uint8_t on();
uint8_t off();
private:
uint8_t pin;
};
