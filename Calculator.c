


#include "Calculator.h"





int main ()
{
	int i;
	for (i=;i<=10;++i)
	{
		int result = Add_Two_Numbers(5,7);
	}
	printf("%d", result);

	
	int result;
	result = Add_Two_Numbers(5,7);
	printf("%d", result1);
	
	printf("%d", result0);
	

	
	int result = Multiply_Two_numbers(5,7);
	
	return 0;
}




int Add_Two_Numbers(int First_Num,int Second_Num)
{
	
	int Result =0;
	Result = First_Num+Second_Num;
	return Result;
}
int Subtract_Two_Numbers(int First_Num,int Second_Num)
{
	
	int Result =0;
	Result = First_Num-Second_Num;
	return Result;
	
	
}

int Multiply_Two_Numbers(int First_Num,int Second_Num)
{
	
	
	
	int Result =0;
	Result = First_Num*Second_Num;
	return Result;
}
int Divide_Two_Numbers(int First_Num,int Second_Num)
{
	
	
	int Result =0;
	Result = First_Num/Second_Num;
	return Result;
		
}