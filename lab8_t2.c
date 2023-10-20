#include<stdio.h>
float unknown_angle(float angle1,float angle2)
{
	float angle3=180-(angle1+angle2);
	return angle3;
}
int main()
{
	float angle1=40;
	float angle2=90;
	float angle=unknown_angle(angle1,angle2);
	printf("the third angle is %.2f",angle);
	
}
