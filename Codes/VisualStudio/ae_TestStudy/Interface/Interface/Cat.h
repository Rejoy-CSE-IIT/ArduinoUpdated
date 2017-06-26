#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
	void show(String msg)
	{
		Serial.println(msg + "from Cat");
	}
};

#endif


