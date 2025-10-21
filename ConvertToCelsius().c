/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Function that convert to celsius
*/

#include <stdio.h>

int main(int argc, char** argv)
{
	float ConvertToCelsius(),temperature,Celsius;
	
//To input temperature
	   printf("Enter temperature(fahrenheit):\n");
	   scanf("%f",&temperature);
	   
//Conversion
	   Celsius=(temperature-32)*5/9;
	   
	   return Celsius;	   
	   	
	return 0;
}