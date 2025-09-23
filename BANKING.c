/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes that allow the user to prompot customers age,and income 
			and determine if custumer qualify for a loan
*/

#include <stdio.h>

//main function
int main()
{
//varibles declarations
	int age,income;

//customer to input
		printf("enter your age\n");
		scanf("%d",&age);
		printf("enter your income\n");
		scanf("%d",&income);
		
//Results to be dispalayed
	 if(&age>=21&income>=21000)
	 	printf("Congratulation you qualify for a loan\n");
	 else
	 {
		 printf("Unfortunately,we are unable to offer you a laon this time\n");
	 }
	   	
	

	return 0;
}