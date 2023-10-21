#include<stdio.h>
#include<stdbool.h>
int main()
{
	int dim;
	int sum1=0;
	int sum2=0;
	int test=false;
	printf("enter the dimensions of square matrix:");
	scanf("%d",&dim);
	int sqr[dim][dim];
	int dim1=dim-1;
	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			printf("enter element for index %d%d :",i,j);
			scanf("%d",&sqr[i][j]);
		}
	}
	printf("the matrix is:");
	for(int i=0;i<dim;i++)
	{
		printf("\n");
		for(int j=0;j<dim;j++)
		{
			printf("%d ",sqr[i][j]);
			
		}
	}
		for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
		 	if(i==j)
		 	{
		 		sum1=sum1+sqr[i][j];
			 }
			 if((dim1-i)==j)
			 {
			 	sum2=sum2+sqr[i][j];
			 }
			 
			
		}
	}
	if(sum1==sum2)
	{
		test=true;
	}
	sum1=0;
	sum2=0;
		
		for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			sum1=sum1+sqr[i][j];
			sum2=sum2+sqr[j][j];
			 
			
		}
		if(sum1==sum2)
		{
			test=true;
		}
		else
		{
			test=false;
			break;
		}
	}
	if(test==true)
	{
		printf("\n it is a magic square");
	}
	else
	{
		printf("\n it is not a magic square");
	}
}
