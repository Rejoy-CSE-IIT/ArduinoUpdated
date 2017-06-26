#ifndef ANIMAL_H
#define ANIMAL_H
 
#include <Wstring.h>  
#include <Arduino.h>
class Animal
{
 
public:
	virtual  void show(String msg)
	{
		Serial.println(msg+"from animal");
	}

};

#endif

