/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to caculate simple_interest by allowing user to input principle,rate and time
*/

#include <stdio.h>

//main function
int main()
{
//Variables declaration
	   int principle_amount,time,rate,simple_interest;
	   
//User to input
	   printf("enter principle_amount");
	   scanf("%d",&principle_amount);
	   printf("enter time");
	   scanf("%d",&time);
	   printf("enter rate");
	   scanf("%d",&rate);
	   
//Formula to calc. simple_interest
	  simple_interest=principle_amount*rate/100*time;
	  
//Output simple_interest
	printf("your simple_interest is Ksh.%d\n",simple_interest);
	   	   	   
	   	
	return 0;
}