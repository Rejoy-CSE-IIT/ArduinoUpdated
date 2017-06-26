#include "A.h"


 

void A::print_message(String temp)
{

	Serial.println(temp);




}




void A::call_by_value(int temp)
{



	temp = temp + 1;


}

void A::call_by_ref(int *temp)
{



	*temp = *temp + 1;


}


A* A::pointer_of_Class_static = nullptr;






