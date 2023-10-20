	#include<stdio.h>
	float fahrenheit(float celcius)
	{
		int fahrenheit=1.8*celcius+32;
		printf("the temperature in fahrenheit is %d",fahrenheit);
	}
	int main()
	{
		int celcius=40;
		fahrenheit(celcius);
	}
