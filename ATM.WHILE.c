/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes using while loop where the user enters the amount
			to withdraw until the balance is zero or negative
*/

# include<stdio.h>

//main function
int main()
{
//varaiables declaration
	   float amount;
	   float balance=5000;
	   
//Display balance to the customer
	printf("Your current balance is Ksh.%f\n",balance);
	   
//using of while_loop
	   while(balance>0)
	   {
		   printf("Enter amount to withdraw:\n");
		   scanf("%f",&amount);
		   
		   balance-=amount;
		   printf("Your balance is %f\n",balance);
	   }

		      printf("sorry,you have insufficient balance");
	   
	   	
		      	
	return 0;
}