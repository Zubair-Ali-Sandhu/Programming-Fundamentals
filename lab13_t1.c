#include<stdio.h>
int main()
{
 int num[10];
 int a=0; int b=0;int sum=0;
 int l=0;
 for(int i=1;i<=10;i++)
 {
 	printf("enter the result of %d student\n",i);
 	scanf("%d",&num[i-1]);
 	if(num[i-1]>a)
 	{
 		a=num[i-1];
	 }
	 if(b==0)
	 {
	 	l=num[i-1];
	 	b=1;
	 }
	 else if (num[i-1]<l)
	 {
	 	l=num[i-1];
	 }
	 sum=sum+num[i-1];
 }
 float average=sum/10;
 printf("\nthe highest marks is :%d",a);
 printf("\nthe lowest marks are:%d",l);
 printf("\nthe average is :%.2f",average);
}
