/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:C function to calculate total electricity bill
*/

#include <stdio.h>

int main(int argc, char** argv)
{
float CalculateElectricBill();

	float bill=0;
	int units;

//allows user to enter the number of units		
	printf("enter number of units:\n");
	scanf("%d",&units);
	
	if(units <=100){
		bill=units*10;
	}
	else if(units <=200){
		bill=(100*10)+(units -100)*15;
	}
	else{
		bill=(100*10)+(100*15)+(units-200)*20;
	}
	
	return bill;	
	return 0;
}

	
