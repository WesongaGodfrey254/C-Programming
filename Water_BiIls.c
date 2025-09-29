/*
Name:Godfrey Wesonga
RegNo:PA106/28754/25
Description:Codes to calculate the total bills of water as per the units used
*/

#include <stdio.h>

//main function
int main()
{
//Variables declaration
	   int water_units,unit_fee;
	   float Total_bill;
	   
//Allow user to enter water_units
	 	 printf("enter water_units:\n");
		 scanf("%d",&water_units);

	if(water_units>=0 &&water_units<=30){
		unit_fee=20;
	}
	else if(water_units>=31 &&water_units<=60){
		unit_fee=25;
	}
	else if(water_units>60){
		unit_fee=30;
	}
	
//To calculate total bills
		Total_bill=water_units*unit_fee;
		printf("Your Total_bill is Ksh.%.2f",Total_bill);
											 		    	
	return 0;
}