
#ifndef LED_DIAG_H
#define LED_DIAG_H
 

 

class LED_diag
{
public:
	 
	int                                                test_val_pub_I;
	int getValue();
	static int testS;
	int testN;
	void  static_Increment(int  );
 
	LED_diag()
	{

		 
		test_val_pub_I = 10;
		test_val_pri = 5;

	} 

	LED_diag(int test_val_pub_I_t,int test_val_pri_t)
	{


		test_val_pub_I = test_val_pub_I_t;
		test_val_pri = test_val_pri_t;

	}


	void  setValue(int test_val_pri_x)
	{
		

	     test_val_pri = test_val_pri_x;
	}
private:
	int                                                test_val_pri;

	int  getValue_EX();
 


	


};


 

#endif

 
