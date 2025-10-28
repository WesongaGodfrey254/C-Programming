/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:A hotel chain wants to develop a simple system to monitor
			revenue and room occupancy.Here are codes of 3D Array that monitors
			multiple branches.
*/
#include <stdio.h>

int main(int argc, char** argv)
{
//variables daclaration
	   int chain[3][5][10];
	   int branch,floor,room;
	   int totaloccupied=0,vacantroom,totalroom;
	   
//allow the user to enter the data
	   printf("Enter occupancy data for all branches(1=occupaied,0=vacant:\n");
	   for(branch=0;branch<3;branch++){
		   printf("Branch %d:\n",branch+1);
		   
		   for(floor=0;floor<5;floor++){
			   printf("Floor %d:\n",floor+1);
			   
			   for(room=0;room<10;room++){
					printf("room %d:\n",room+1);
		
			scanf("%d",&chain[branch][floor][room]);
			if(chain[branch][floor][room]==1)
				
				totaloccupied++;
			}
		   }
	   }
//calculation of total room in all branches	   
	   totalroom=branch*floor*room;
//calculation of vacant room	   
	   vacantroom=totalroom-totaloccupied;
//Display of occupied and vacant rooms
	   	printf("Total number of rooms across all branches:%d\n",totalroom);   	   
	    printf("Total number of occupied rooms accross all branches:%d\n",totaloccupied);
		printf("Total number of vacant rooms across all branches:%d\n",vacantroom);  	
			   	
	return 0;
}