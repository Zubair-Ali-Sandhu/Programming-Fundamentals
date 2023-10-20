#include<stdio.h>
int main()
{

float weight,distance,charges;
     printf("enter the weight of the parcel: ");
	 scanf("%f",&weight);
	 if(weight>0&&weight<=20)
	 {
	 	printf("enter the distance to be shipped in miles:");
	 scanf("%f",&distance);
	 if(distance>=10&&distance<=3000)
	 {
	 	if(weight<=2) 
	 	{
	 		charges=0.0022*distance;
	 		printf("total charges:%.3f",charges);
		 }
		 else if(weight>2&&weight<=6)
		 {
		 	charges=0.0044*distance;
		 	printf("total charges:%.3f",charges);
		 }
		 else if(weight>6&&weight<=10)
		 {
		    charges=0.0074*distance;
		    printf("total charges:%.3f",charges);
		 }
		 else if(weight>10&&weight<=20)
		 {
		 	charges=0.0096*distance;
		 	printf("total charges:%.3f",charges);
	 }}
	 else
	 printf("TCS does not deliver to such distances");}
	 
	 
	 else
	 
	 {
	 printf("weight can not be negative , zero or greater than 20kg");}
}

