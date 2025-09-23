/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to calc. compound inerest by allowing user to input principle,rate and time
*/

#include <stdio.h>

//main function
int main()
{
//Variables declarations
	   int principle_amount,time,rate,compound_interest;
	   int a=1;
	   int n=1;
	   
//User's input
	   printf("enter your principle_amount\n");
	   scanf("%d",&principle_amount);
	   printf("enter time\n");
	   scanf("%d",&time);
	   printf("enter rate\n");
	   scanf("%d",&rate);
	   
//Calculate compound_interest
	   compound_interest=principle_amount*(a+rate/n)^n*time;
	   printf("compound_interest is Ksh%d",compound_interest);	   	   	
	
	return 0;
}