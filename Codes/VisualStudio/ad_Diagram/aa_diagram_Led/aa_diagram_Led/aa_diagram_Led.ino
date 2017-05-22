

#include     "LED_diag.h"
#include "constant_LED.h"

LED_diag                                                   LED_Object(LED_PORT_13, BUTTON_PORT_09);
// the setup function runs once when you press reset or power the board
void setup() 
{
	LED_Object.initialize_HardWare();
}

// the loop function runs over and over again until power down or reset
void loop()
{
	LED_Object.LED_STEPS();
	 //LED_Object.delay_timer(DELAY_VALUE);
}
