#include "Light.h"

Light::Light(){
 	pin = 44;
}
Light::Light(uint8_t pin_num){
	pin = pin_num;
}
void Light::update(uint8_t intensity)
{
	analogWrite(44,intensity);
}
