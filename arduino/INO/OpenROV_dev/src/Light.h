#include <Arduino.h>

class Light
{
	public:
	Light();
	Light(uint8_t pin_num);
	void update(uint8_t intensity);

	private:
	uint8_t pin;
};
