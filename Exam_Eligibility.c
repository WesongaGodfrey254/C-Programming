/*
Name:Godfrey Wesonga
RegNo:PA106/G/28754/25
Decription:Codes to cornfirm if the student is eligible to sit for an exam.
*/

#include <stdio.h>

//main function
int main()
{
	printf("EXAM ELIGIBILITY\n");
	
//Variables declaration
	   int Average_marks,No_weeks;
	   int n=15; //Total number of weeks
	   float Attendance;
	   
	   
//prompot secretary to enter
printf("HELLO SECRETARY PLZ ENTER STUDENT'S:\n");	
		
		printf("Enter student's Average_marks\n");
		scanf("%d",&Average_marks);
		printf("Enter No_weeks (Out of 15):\n");
		scanf("%d",&No_weeks);
		
//Calculation of Attendance percentage			
	Attendance=(No_weeks*100)/n;
	printf("Students Attendance is %.1f%%\n",Attendance);
	
	   if(Attendance>=75 &&Average_marks>=40){
		   printf("EXCELLENCE!\t Student is Eligible");
	   }
	   else{
		   printf("SORRY!\t Student is not Eligible");
		   	   }	
	
	return 0;
}