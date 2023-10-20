#include<stdio.h>
int main()
{
	int a;
	printf("enter first integer:");
	scanf("%d",&a);
	int b;
	printf("enter second integer:");
	scanf("%d",&b);
	if(a>b)
	{
		printf("%d is greater than %d",a,b);
	}
	else if(a==b)
	{
		printf("both are equal");
	}
	else
	{
		printf("%d is greater than %d",b,a);
	}
	return 0;
}
