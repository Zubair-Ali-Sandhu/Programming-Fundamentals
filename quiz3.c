#include<stdio.h>
int main()
{
	int num;
	int sum=0;
	printf("enter the number :");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
			
			
		}
	}
	if(sum==num)
	{
		printf("this is a perfect  number");
	}
	else
	{
		printf("it is not a perfect number");
	}
}
