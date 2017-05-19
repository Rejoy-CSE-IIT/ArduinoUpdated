#include "QT_1.h"
#include"constant_qt_1.h"
void QT_1::Initialize_HardWare()
{

	pinMode(_led_port, OUTPUT);



	analogWrite(_led_port, LED_MAX);


	Serial.begin(BAUD_RATE);

}



QT_1::QT_1(int led_port)
{

	_led_port = led_port;




}

void QT_1::writeLeds(char led, int brightness)
{

	// This is for test
	if (led == 'r')
	{
		analogWrite(_led_port, LED_MAX - brightness);
	}


	return;
}