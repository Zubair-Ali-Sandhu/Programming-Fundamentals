#include<stdio.h>
int main()
{
    float meal_charge=50;
    printf("the meal charge is %.2f\n",meal_charge);
    float tax=(4.75/100)*meal_charge;
    printf("tax on the bill is %.2f\n",tax);
    float tip=(10.0/100)*(meal_charge+tax);
    printf("the tip of the bill is %.2f\n",tip);
    float total_bill=meal_charge+tip+tax;
    printf("the total bill including tax and tip is %.2f\n",total_bill);
    
	return 0;
	
}
