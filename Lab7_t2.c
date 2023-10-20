#include<stdio.h>
int main()
{
	int previous_units=200;
	int current_units=250;
	int october_units=current_units-previous_units;
	int total_bill=5*october_units;
	printf("total units consumed in october is %d and total bill is %d",october_units,total_bill);
		return 0;
}
