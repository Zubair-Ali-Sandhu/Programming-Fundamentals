	#include<stdio.h>
	float slices()
	{
		float d=9.0;
		float r=d/2.0;
		float area=r*r*3.14;
		float no_of_slices=area/14.25;
		return no_of_slices;
		
	}
	int main()
	{
		float slice=slices();
		printf("the number of slice in pizza is %.2f",slice);
		return 0;
	}
