#include<stdio.h>
 long int fact(int n)
{
	if(n>=1)
	{
	return n*fact(n-1);
}
else
{
	return 1;
}
}
long int n_c_r(int n,int r)
{
	long int c=n-r;
	
	
	long int a= fact(n)/(fact(r)*fact(c));
	return a;
}

int main()

{
	int n,r;
	
	printf("enter the n ");
	scanf("%ld",&n);
	printf("enter the r ");
	scanf("%ld",&r);
	int c=n-r;
	if(c>=0&&n>=0&&r>=0)
	{
	
	long int c=n_c_r(n,r);
	printf(" the  answer of %d combination %d is  %ld",n,r,c);
    }
     else
  {
	printf("n cannot be smaller than r and \nr and n should not be  smaller than 0");
  }
}  
