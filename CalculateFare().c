/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Function to calculate fare based in distance in KM.
*/

#include <stdint.h>

int main(int argc, char** argv)
{
	int CalculateFare();
	int distance,Total_fare;
	
//Allow user to enter distance
	   printf("Enter distance(Km):\n");
	   scanf("%d",&distance);
	   
//Calculation of fare
	   Total_fare=(distance*50);
	   
	   return Total_fare;	   	
	
	return 0;
}