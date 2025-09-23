/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Description:Codes to allow user to input height,regno,idno
*/

#include <stdio.h>

//main functin
int main(){
	printf("HELLO FIRST YEARS!!!\n");
	
//variables Declarations
	int height,Id_No;
	char Reg_No[]={};
	
//prompot user to input
	printf("enter your height\n");
	scanf("%d",&height);
	printf("enter your Id_No\n");
	scanf("%d",&Id_No);
	printf("enter your Reg_No\n");
	scanf("%s",&Reg_No);
	
//Output entered informations
	printf("your height is %d\n",height);
	printf("your Id_No is %d\n",Id_No);
	printf("your Reg_No is %s\n",Reg_No);
	
	return 0;
}