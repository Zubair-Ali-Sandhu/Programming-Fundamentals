#include<stdio.h>
int main()
{
    int a;
	printf("enter an integer:");
	scanf("%d",&a);
    
    if(a%2==0)
    {
    	printf("entered number is an even number");
	}
	else
	{
		printf("entered number is odd");
	}
	return 0;
}
