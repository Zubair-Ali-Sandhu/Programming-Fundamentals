#include<stdio.h>
void print_table(int n)
{
	int m;
	for(int i=1;i<=10;i++)
	{
		m=i*n;
	  printf("%d*%d=%d\n",n,i,m);
	}
}

int main()
{
	int a;
	char b;
	int c;
	int d;
	int e;
	printf("enter the number you want to print table:");
	scanf(" %d",&a);
	if(a>=0)
	{
		print_table(a);
	}
	else{
		printf("invalid input");
	}
	
	
		do
		{
			printf("do you want another table ? Y/N");
			scanf(" %c",&d);
			if(d=='y'||d=='Y')
			{
				printf("enter the number");
				scanf("%d",&e);
			print_table(e);	
			}
			else if(d=='n'||d=='N')
			{
			printf("thank you for using our program");
			break;	
			}
			else
			{
				printf("invalid input");
				break;
			}
			
			
		}
		while(b=='y'||'Y');
		return 0;
	
	
}
