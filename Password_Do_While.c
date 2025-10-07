/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to enter password until is correct
*/

#include <stdio.h>
#include <string.h>

//main function
int main()
{
	char password[10];
	const char correct_password[]="1234";
	
	do{
		printf("Enter your password:\n");
		scanf("%s",&password);
	}
	while(strcmp (password,correct_password) !=0);
	{
		printf("Access Granted\n");
	}
	
	return 0;
}