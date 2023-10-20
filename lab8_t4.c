#include<stdio.h>
int monthlyexp()
{
	int loan_payment=200;int insurance=50;int gas=700;int oil=500; int tires=700;int maintenance=200;
	int monthly_exp=loan_payment+insurance+gas+oil+tires+maintenance;
	printf("the monthly expenses are %d\n",monthly_exp);
	return monthly_exp;
}
int yearlyexp()
{
	int a= monthlyexp();
	int b=12*a;
	return b;
}
int main()
{
	int a=yearlyexp();
    printf("yearly expenses are %d",a);
}
