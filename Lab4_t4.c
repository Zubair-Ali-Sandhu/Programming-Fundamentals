#include<stdio.h>
int main ()
{
	double seconds=86400; 
	int minutes=seconds/60; 
	int hours=seconds/3600; 
	int days= seconds/86400;
	printf("\n the time in minutes is= %d", minutes);
	printf("\n the time in hours is= %d", hours);
	printf("\n the time in days is= %d",  days);
	
	return 0;
}
//Zubair Ali CS-1c; Program to convert time from seconds into minutes,hours and days