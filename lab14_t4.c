#include<stdio.h>
int main()
{
	int rows;
	int columns;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	printf("enter the number of columns:");
	scanf("%d",&columns);
	int matrix[rows][columns];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			printf("enter the element for index %d%d:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("the original matrix is:");
	for(int i=0;i<rows;i++)
	{
		printf("\n");
		for(int j=0;j<columns;j++)
		{
			printf("%d ",matrix[i][j]);
			
		}
	}
	printf("\n the transpose of matrix is:\n");
	for(int i=0;i<columns;i++)
	{
		printf("\n");
		for(int j=0;j<rows;j++)
		{
			printf("%d ",matrix[j][i]);
			
		}
	}
	
}
