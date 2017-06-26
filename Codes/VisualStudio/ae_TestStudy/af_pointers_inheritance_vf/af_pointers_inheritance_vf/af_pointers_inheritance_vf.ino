#include "A.h"
#include "constant_LED.h"
A *a;
// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(BAUD_RATE);
	a = new A();
	a->first = 100;
	a->first_pointer = &a->first;
}

// the loop function runs over and over again until power down or reset
void loop() 
{
	//a->call_by_value(a->first);

	// Serial.println(a->first, DEC);

	Serial.println("Address of a");
	Serial.println((int)&a, DEC);

	Serial.println("Content of a");
	Serial.println( (int)a, DEC);


}

