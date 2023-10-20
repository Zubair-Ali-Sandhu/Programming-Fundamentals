#include<stdio.h>
int main()
{
	float profit_percentage=20.0;
	float cost_price=5000;
	float profit=(profit_percentage/100.0)*cost_price;
	float selling_price=cost_price+profit;
	printf("the cost price of circuit board is %.2f and while its selling price is %.2f",cost_price,selling_price);
	return 0;
	
}
