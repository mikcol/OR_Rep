/*Thruster Class utilizes PWM on timer 4 of the atmega2560 to command the speed controllers for the brushless motors*/
#include <Arduino.h>
class Thruster {
public:
Thruster();
int Init();
int setValues(uint16_t vertical,uint16_t portside,uint16_t starboard);
int timerStop();
int timerStart();

};

