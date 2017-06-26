#include "A.h"
#include "constant_LED.h"

A general_obj;
A  *pointer_obj;
// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(BAUD_RATE);

	pointer_obj = new A();

	general_obj.first = 100;
	pointer_obj->first = 1000;

	general_obj.first_pointer= &general_obj.first;
	pointer_obj->first_pointer = &pointer_obj->first;


	general_obj.pointer_of_Class = &general_obj;
	pointer_obj->pointer_of_Class = pointer_obj;
	




	 
}

// the loop function runs over and over again until power down or reset
void loop()
{
	




 
	
	
	
	    /*
		general_obj.call_by_value(general_obj.first);
		Serial.println(general_obj.first);
		*/

	/* 	 
	general_obj.call_by_ref  (&general_obj.first);
	Serial.println(general_obj.first);
	*/


	/*
	 
	Serial.println("Address of general_obj ");
    Serial.println((int)&general_obj, DEC);
	 
	Serial.println("Address of first ");
	Serial.println((int)&general_obj.first, DEC);
	Serial.println("value of first ");
	Serial.println( general_obj.first, DEC);


	Serial.println("Address of first_pointer ");
	Serial.println((int)&general_obj.first_pointer, DEC);
	Serial.println("value of first ");
	Serial.println(general_obj.first_pointer, DEC);

	Serial.println("Address of pointer_of_Class ");
	Serial.println((int)&general_obj.pointer_of_Class, DEC);
	Serial.println("value of first ");
	Serial.println((int)general_obj.pointer_of_Class, DEC);

	Serial.println("Address of pointer_of_Class_static ");
	Serial.println((int)&A::pointer_of_Class_static, DEC);
	Serial.println("value of first ");
	Serial.println((int)A::pointer_of_Class_static, DEC);


	Serial.println("***********");


	Serial.println("Address of pointer_obj ");
	Serial.println((int)&pointer_obj, DEC);

	Serial.println("value of pointer_obj ");
	Serial.println((int)&pointer_obj, DEC);


	Serial.println("Address of first ");
	Serial.println((int)&pointer_obj->first, DEC);
	Serial.println("value of first ");
	Serial.println(pointer_obj->first, DEC);


	Serial.println("Address of first_pointer ");
	Serial.println((int)&pointer_obj->first_pointer, DEC);
	Serial.println("value of first ");
	Serial.println(pointer_obj->first_pointer, DEC);

	Serial.println("Address of pointer_of_Class ");
	Serial.println((int)&pointer_obj->pointer_of_Class, DEC);
	Serial.println("value of first ");
	Serial.println((int)pointer_obj->pointer_of_Class, DEC);

	Serial.println("Address of pointer_of_Class_static ");
	Serial.println((int)&A::pointer_of_Class_static, DEC);
	Serial.println("value of first ");
	Serial.println((int)A::pointer_of_Class_static, DEC);

	*/




	 



}

