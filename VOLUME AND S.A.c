/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to calcullate Volume and Surface area
*/
#include <stdio.h>

//main function
	int main()
	{
		
//Variables declarations
		int height,radius,volume,surface_area;
		float pi=3.142;
		int a=2;
		
//prompot user to input
		printf("enter your height\n");
		scanf("%d",&height);
		printf("enter your radius\n");
		scanf("%d",&radius);
		
//Outputs
		  printf("your height is %d\n",height);
		  printf("your radius is %d\n",radius);	
		  printf("pi %f\n",pi);
		  printf("a %d\n",a);
		  
//To calculate volume
		  volume=pi*radius*radius*height;
		  printf("volume is %dcm3\n",volume);
		  
//To calculate surface_area
		  surface_area=(a*pi*radius*radius)+(a*pi*radius*height);
		  printf("surface_area is %dcm2\n",surface_area);		  		  	
		
		return 0;
	}
