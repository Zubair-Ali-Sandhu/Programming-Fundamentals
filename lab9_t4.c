#include<stdio.h>
void calculateattendance(float classesattended,float totalclasses )
{
	float  a=(classesattended/totalclasses)*100.0;
	printf("your attendance is %.2f\n",a);
	if(a>=80)
	{
		printf("you are allowed to sit in exam");
	}
	else 
	{
		printf("you are not allowed to sit in the exam");
	}
	
}
int main()
{
	float a;
	float b;
	printf("enter the number of classes you attended  ");
    scanf("%f",&a);
    printf("enter the total number of classes arranged by the instructor  ");
    scanf("%f",&b);
    calculateattendance(a,b);
    
}
