#include<stdio.h>

int main()
{
	float a;float q=1;float sum;
	printf("enter the number");
	scanf(" %f",&a);
	for(float i=1;i<=a;i++)
	{
		for(int  c=i;c<=i;c++)
		{
		
		q=c*q;
	}
	float d=1/q;
	printf("1/%f! = %f\n",i,d);
		sum=sum+d;	
	}
	
	printf("sum=%f",sum);
}
