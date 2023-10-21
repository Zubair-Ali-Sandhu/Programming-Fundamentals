// CHALLANGE: Find and fix the Errors
// Dont remove the code and write your own code
// Find the errros in the same code ad correct the parts needed
// Your program should run and display correct output as expected 

    #include<stdio.h>
    int main()
{
	
	// printing a float value
	float a=5.5; 
	printf("\n the value is: %.1f", a);
	
	
	// seconds to mins conversion
	int seconds=5000;
	int val=60;
	float mins=seconds/val;
	printf("\n there are %.2f minutes in %d seconds", mins,seconds);
	
	
	// Percentage calculator, output should be in float
	float marks_obtained= 96; 
	float total_marks=100;
	float percentage=marks_obtained/total_marks*100;
	printf("\n percentage: %.2f", percentage);
	return 0;
}
//zubair ali bcs-1c pf quiz 1