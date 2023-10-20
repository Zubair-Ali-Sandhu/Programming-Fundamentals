#include<stdio.h>
void age(int age1,int age2,int age3)
{
	if(age1==age2&&age1==age3)
	{
		printf("all three people have equal or same ages");
	}
	else if(age1>age2&&age1>age3)
	{
		printf("elset:ali");
	}
	else if(age2>age1&&age2>age3)
	{
		printf("eldest:ahmed");
	}
	else
	{
		printf("eldest :junaid");
	}
}
int main()
{
    int age1;
    int age2;
    int age3;
    printf("enter the age of ali\n");
    scanf("%d",& age1);
    printf("enter the age of ahmed\n");
    scanf("%d",& age2);
	printf("enter the age of junaid\n");
    scanf("%d",& age3);
    age(age1,age2,age3);
}
