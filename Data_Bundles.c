/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to allow user to select bundles
*/

#include <stdio.h>

//main function
int main()
{
	printf("SELECT DATA BUNDLES (1-4)\n");
	
//Variables declarations
	int choice;
	
//Allo user to enter choice
	   printf("Enter your choice:\n");
	   scanf("%d",&choice);
	   
	if(choice >0 &&choice<=1){
		printf("You selected 100MB\n");
		printf("Cost is Ksh.50\n");
	}
	else if(choice >1 &&choice<=2){
		printf("You selected 500MB\n");
		printf("Cost is Ksh.200\n");
	}
	else if(choice >2 &&choice<=3){
		printf("You selected 1GB\n");
		printf("Cost is Ksh.350\n");
	}
	else if(choice >3 &&choice<=4){
		printf("You selected 2GB\n");
		printf("cost is Ksh.600\n");
	}
	else{
		printf("Invalide Choice.\n");
	}   	
		
	return 0;
}