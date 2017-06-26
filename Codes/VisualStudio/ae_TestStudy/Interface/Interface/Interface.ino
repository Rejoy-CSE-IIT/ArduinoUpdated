#include "Dog.h"
#include "Animal.h"
#include  "Cat.h"
#include "constant_LED.h"



// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(BAUD_RATE);
}

// the loop function runs over and over again until power down or reset
void loop()
{
	Dog dog;
	Cat cat;

	Animal *animal = nullptr;
	animal = &dog;
	animal->show("already object --");
	
	animal = new Dog();
	 
	animal->show("new object--");



	animal = &cat;
	animal->show("already object --");

	animal = new Cat();

	animal->show("new object--");


	

	Serial.println("###############");











}
