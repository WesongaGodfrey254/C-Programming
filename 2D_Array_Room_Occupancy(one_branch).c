/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:A hotel chain wants to develop a simple system to monitor
			revenue and room occupancy.Here are codes of 2D Array that monitors
			room occupancy(One branch).
*/
#include <stdio.h>

int main(int argc, char** argv)
{
//variable declaration	
	int occupancy[5][10];
	int floor,room,occupied,vacant;
	
	printf("Enter occupancy status for each room (1=occupied,0=vacant):\n");
	
//use of for loop
	for(floor=0;floor<5;floor++)
	{
	printf("floor %d:\n",floor+1);	
	
		for(room=0;room<10;room++){
		printf("room %d:\n",room+1);
		
		scanf("%d",&occupancy[floor][room]);
		}
	}
//Display the following
	   printf("occupancy report per floor:\n");
	   
	   for(floor=0;floor<5;floor++){
		 occupied=vacant=0;
			for(room=0;room<10;room++){
				if(occupancy[floor][room])
					occupied++;
				else
					vacant++;
			}
			printf("Floor: %d-Occupied: %d,Vacant: %d\n",floor+1,occupied,vacant);	   
	   }	   	
	
	return 0;
}