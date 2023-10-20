#include<stdio.h>
void revno(int number)
{
	int a=number/100;
    int b=number%100;
	int c=b%10;
	int d=b/10;
	int l=(c*100)+(d*10)+a;
	
	 printf("the reverse of %d is=%.3d",number,l);
	
	
	}
 int main()
{
	int number=574;
	revno(number);
    
}
