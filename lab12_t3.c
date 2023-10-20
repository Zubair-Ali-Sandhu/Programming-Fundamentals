#include<stdio.h>
int main()
{
	int a;char q;
	printf("how many rows:");
	scanf("%d",&a);
	printf("enter the symbol:");
	scanf(" %c",&q);
	int h=a;
	for(int i=1;i<=a;i++)
	{
		printf("\n");
		for( int j=a;j>0;j--)
		{
			if(j>=i)
			printf("%c ",q);
				
				
		}
		h--;}}
	

