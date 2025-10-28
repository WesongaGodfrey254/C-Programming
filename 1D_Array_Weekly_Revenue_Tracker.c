/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:A hotel chain wants to develop a simple system to monitor
			revenue and room occupancy.Here are codes of 1D Array that monitors
			weekly revenue tracker.
*/

#include <stdio.h>

int main()
{
	float revenue[7],total=0,average;
	int i;
	
	printf("Enter revenue for each of the 7 days:\n");
		for(i=0;i<7;i++){
			printf("Day %d:",i+1);
			scanf("%f",&revenue[i]);
			
			total+=revenue[i];
		}
		average=total/7;
		
	printf("Total weekly Revenue:%.2f\n",total);
	printf("Average Daily Revenue:%.2f\n",average);	
	
	return 0;
}			