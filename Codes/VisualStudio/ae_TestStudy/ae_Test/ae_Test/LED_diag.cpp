#include "LED_diag.h"



int LED_diag::getValue()
{
	return getValue_EX();
}

int LED_diag::getValue_EX()
{
	return test_val_pri;
}

void LED_diag::static_Increment(int x)
{
	LED_diag::testS = LED_diag::testS + x;
}


int LED_diag::testS = LED_diag::testS;