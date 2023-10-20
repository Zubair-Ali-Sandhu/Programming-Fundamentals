#include<stdio.h>
int main()
{
	int row1;
	int colum1;
	int row2;
	int colum2;
	int d;
	int sum;
	printf("enter the number of rows for matrix 1:");
	scanf("%d",&row1);
	printf("enter the number of column for matrix 1:");
	scanf("%d",&colum1);

	int matrix1[row1][colum1];
	
	
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<colum1;j++)
		{
			printf("enter the element for index %d%d of matrix 1:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("the  matrix 1 is:");
	for(int i=0;i<row1;i++)
	{
		printf("\n");
		for(int j=0;j<colum1;j++)
		{
			printf("%d ",matrix1[i][j]);
			
		}
	}
	printf("\nenter the number of rows for matrix 2:");
	scanf("%d",&row2);
	printf("enter the number of column for matrix 2:");
	scanf("%d",&colum2);
	int matrix2[row2][colum2];
	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<colum2;j++)
		{
			printf("enter the element for index %d%d of matrix 2:",i,j);
			scanf("%d",&matrix2[i][j]);
		}
	}
	printf("the  matrix 2 is:");
	for(int i=0;i<row2;i++)
	{
		printf("\n");
		for(int j=0;j<colum2;j++)
		{
			printf("%d ",matrix2[i][j]);
			
		}
	}
	int result[row1][colum2];
	if(colum1==row2)
	{
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<colum2;j++)
		{
		  for(int k=0;k<row2;k++)
		  {
		  	d=matrix1[i][k]*matrix2[k][j];
		  	sum=sum+d;
		  	
		  }	
		  result[i][j]=sum;
		  sum=0;
		}
		
	}
		printf("\n the resultant matrix is:");
	for(int i=0;i<row1;i++)
	{
		printf("\n");
		for(int j=0;j<colum2;j++)
		{
			printf("%d ",result[i][j]);
		}
	}
			
		
		
	}
	else
	{
		printf("\n the number of column of matrix 1 are not equal to rows of matrix 2 \n so matrix can not be multiplied.");
	}

}
