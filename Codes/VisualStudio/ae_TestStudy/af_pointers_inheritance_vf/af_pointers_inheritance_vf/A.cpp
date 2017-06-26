#include "A.h"
 
 

void A::call_by_value(int temp)
{



	temp = temp + 1;


}

void A::call_by_ref(int *temp)
{



	*temp = *temp + 1;


}
 


