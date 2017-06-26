#include "Dog.h"
#include "Animal.h"
#include "constant_LED.h"
 
 

// the setup function runs once when you press reset or power the board
void setup() 
{
	Serial.begin(BAUD_RATE);
}

// the loop function runs over and over again until power down or reset
void loop() 
{
	Animal a_g;
	a_g.show("Print general case --");
	Animal *a_p;
	a_p = new Animal();
    a_p->show("pointer animal show with new object--");
    a_p = &a_g;
    a_p->show("general  address after reasigning memory -- ");


	Dog d_g;
	d_g.show("Print general case --");
	Dog *d_p;
	d_p = new Dog();
	d_p->show("pointer Dog show with new object--");
	d_p = &d_g;
	d_p->show("general  Dog after reasigning memory -- ");

	a_p = &d_g;

	a_p->show("after difference in variable--");

     Serial.println("###############");

	 






 

	 
}
