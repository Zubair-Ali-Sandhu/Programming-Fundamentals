#include<stdio.h>
int main()
{
	int n;
	int m;
	scanf("%d",&n);
	for(int i=01;i<=50;i++)
	{
		if(i<=9)
		{
		if(i%n==0)
		{
			printf("   0%d\n ",i);
		}
		else
		{
			printf(" 0%d ",i);
		}
	}
	else
   {
	if(i%n==0)
		{
			printf(" %d\n ",i);
		}
		else
		{
			printf(" %d ",i);
		}
    }
	
	}
}
			
		
	

