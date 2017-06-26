#ifndef A_H
#define A_H

#include <Wstring.h>  
#include <Arduino.h>


class A
{

public:
	int first;


	int *first_pointer;

	A *pointer_of_Class;
	static A *pointer_of_Class_static;

	void  call_by_value(int);
	void  call_by_ref(int *);

	 

	void  print_message(String);



};


#endif

