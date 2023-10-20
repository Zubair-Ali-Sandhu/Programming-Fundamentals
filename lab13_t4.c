#include<stdio.h>
int main()
{
int	eo[10];
int j=0;
int l=0;
for(int i=1;i<=10;i++)
 {
 	printf("\n enter the number %d :",i);
 	scanf("%d",&eo[i-1]);
 	
}
for(int i=1;i<=10;i++)
{
	if(eo[i-1]%2==0)
 	{
 		j=j+1;
 		printf("\n%d is even number",eo[i-1]);
	 }
	 if(eo[i-1]%2==1)
 	{
 		l=l+1;
 		printf("\n%d is odd number",eo[i-1]);
	 }
}
printf("\nthere are %d even numbers\n there are %d odd numbers",j,l);
 	
 	
}
