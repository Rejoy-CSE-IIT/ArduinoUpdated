 
#include "constant_qt_1.h"
#include"QT_1.h"
QT_1                                                   LED_Object(LED_PORT_13);
char                                                             led_specifier;
int                                                             led_brightness;
// the setup function runs once when you press reset or power the board
void setup() 
{
	LED_Object.Initialize_HardWare();
}

// the loop function runs over and over again until power down or reset
void loop() 
{
	// put your main code here, to run repeatedly:
	if (Serial.available())
	{
		char led_specifier = Serial.read();
		int led_brightness = Serial.parseInt();
		Serial.print("\n Value of Button \t");
		Serial.println(led_specifier);
		Serial.println(led_brightness, DEC);


		LED_Object.writeLeds(led_specifier, led_brightness);
	}
}
