typdef enum numbers
{
		ZERO=0,
		ONE,
		TWO,
		THREE,
		FOUR,
		FIVE,
		SIX,
		SEVEN,
		EIGHT,
		NINE,
		TEN	
}



int Add_Two_Numbers(int First_Num,int Second_Num);
int Subtract_Two_Numbers(int First_Num,int Second_Num);
int Multiply_Two_Numbers(int First_Num,int Second_Num);
int Divide_Two_Numbers(int First_Num,int Second_Num);



int main ()
{
	
	
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