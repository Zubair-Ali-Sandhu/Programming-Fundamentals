#include<stdio.h>
int main()
{
	int a;int l;
	printf("how many rows:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		printf("\n");
		for( int j=a;j>0;j--)
		{
				if(j<=i)
			{
				printf("*");
				
			}
			else
			{
				printf(" ");
			}
			l++;
		}}}
	

