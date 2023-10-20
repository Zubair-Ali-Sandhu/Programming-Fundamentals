#include<stdio.h>
int main()
{
	int y[3][4];
	int r=0;
	int max=0;
	int sum=0;
	int temp=0;
	int n=0;
	int c=0;
	
	for(int i=0;i<3;i++)
	{
		c=i+1;
		printf("year %d\n",c);
		for(int j=0;j<4;j++)
		{
			n=j+1;
			printf("enter sales for quater %d:",n);
			scanf("%d",&y[i][j]);
			temp=y[i][j];
			if(r==0)
			{
				max=temp;
				r=12;
			}
			else if((temp>max))
			{
				max=temp;
			
			}
		
			
				
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			temp=y[i][j];
			sum=sum+temp;
			n=j+1;
			c=i+1;
			
			
			
		}
		printf("\n year %d revenue:%d",c,sum);
		sum=0;
	}
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			temp=y[i][j];
			n=j+1;
			c=i+1;
			if(temp==max)
			{
				printf("\n Max sales: %d in year %d and quater %d",max,c,n);
				max=0;
				break;
			}
			
			
		}
	}	
	
	
	
	
}

