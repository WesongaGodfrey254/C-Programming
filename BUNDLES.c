/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to allow user to purchase data bundles
*/

#include<stdio.h>

//main function
int main()
{
//Variable declaration
	   int choice;
	   
//Display the following
	   printf("Select data bundles:\n");
	   printf("1.100MB @ Ksh.50\n");
	   printf("2.500MB @ Ksh.200\n");
	   printf("3.1GB @ Ksh.350\n");	
	   printf("4.2GB @ Ksh.600\n");
	   
//Allow Costomer to enter his/her choic
	   printf("Enter your choice (1-4)\n");
	   scanf("%d",&choice);

	switch(choice){
		case 1:
			printf("You selected 100MB\n");
			printf("Cost is Ksh.50\n");
			break;
		
	   case 2:
	   		printf("You selected 200MB\n");
	   		printf("Cost is Ksh.200\n");
	   		break;
	   	
	   case 3:
	   		printf("You selected 1GB\n");
			printf("Cost is Ksh.350\n");
			break;
		
		case 4:
			printf("You selected 2GB\n");
			printf("Cost is Ksh.600\n");
			break;
		
		default:
			printf("Invalid Choice\n");	
											  		   	  		
	}	   	      	
	
	return 0;
}
