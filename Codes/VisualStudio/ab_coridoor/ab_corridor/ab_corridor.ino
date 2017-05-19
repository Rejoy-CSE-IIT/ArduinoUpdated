#include "constant_corridor.h"
#include "corridor.h"

corridor corridor_led(LED_PORT_13, BUTTON_PORT_09);

// the setup function runs once when you press reset or power the board


void setup() 
{
	Serial.begin(BAUD_RATE);
	corridor_led.initialize_hardware();
}

// the loop function runs over and over again until power down or reset
void loop()
{
	//  Serial.println(corridor_led._timer, DEC);
	//  Serial.print("\n Value of LED \t"); 
	// Serial.println( corridor_led._STATE, DEC);
	Serial.print("\n Value of Button \t");
	Serial.println(corridor_led._Button, DEC);
#if TEST
	Serial.println(corridor_led._Button_test, DEC);
 
#endif
	// Serial.println("------------------------------");
	corridor_led.LED_STEPS();
	corridor_led.delay_timer(DELAY_VALUE);

}
