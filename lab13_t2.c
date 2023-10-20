#include<stdio.h>
int main()
{
	int un[15];
	int y=0;
	int s=0;
	//printf("enter the number");
	for(int i=0;i<15;i++)
	{
		
		int e=i+1;
		printf("\nenter the  number %d : ",e);
		scanf("%d",&un[i]);
		
		
	}
	for(int j=0;j<15;j++)
	{
		y=0;
	 for(int k=0;k<15;k++)
	 {
	 	if(un[j]==un[k])
	 	{
	 		y=y+1;
		 }
	 }
	 if(y<=1)
	 {
	 	s=s+1;
	 	printf("\n %d is a unique number",un[j]);
	 }
	}
	printf("\n ther are total %d unique numbers",s);
	
}
