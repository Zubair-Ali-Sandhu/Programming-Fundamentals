#include<stdio.h>
int main()
{
	int dim;
	int sum1=0;
	int sum2=0;
	printf("enter the dimension of the square matrix:");
	scanf("%d",&dim);
	int matrix[dim][dim];
	int dim1=dim-1;
	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			printf("enter the element for index %d%d:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("the original matrix is:");
	for(int i=0;i<dim;i++)
	{
		printf("\n");
		for(int j=0;j<dim;j++)
		{
			printf("%d ",matrix[i][j]);
			
		}
	}
	for(int i=0;i<dim;i++)
	{
		for(int j=0;j<dim;j++)
		{
			if(j==i)
			{
				sum1=sum1+matrix[i][j];
			}
			
		}
	}
	for(int l=dim1;l>=0;l--)
	{
		for(int k=0;k<dim;k++)
		{
			if((dim1-l)==k)
			{
			
			
			
				sum2=sum2+matrix[l][k];
			}
		}
	}
	printf("\nsum of left diagonal:%d",sum1);
	printf("\nsum of right diagonal:%d",sum2);
}
