/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:C program that implements a number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main function
int main(int argc, char** argv)
{
	int secret_number,guess,attempts=0;
	
//initialization
	   srand(time(0));
	   
//random number btn 1-20
	   secret_number=(rand() %20)+1;
	   
	printf("guess the number(between 1 and 20):\n");
	while(1)
	{
		printf("Enter your guess:\n");
		scanf("%d",&guess);
			attempts++;
	if(guess>secret_number){
		printf("Too high!\n");
	}
	else if(guess<secret_number)
	{
		printf("Too low!\n");
	}
	else
	{
		printf("Congratulation! You guessed the correct number.\n");
		printf("Total attempts:%d\n",attempts);
			
			break;
	}
			
	}   	   
	   	
	return 0;
}