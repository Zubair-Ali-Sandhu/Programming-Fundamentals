#include<stdio.h>
int main()
{
	char a;
	printf("input chracter\nn");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		printf("it is a vowel\n");
		break;
		case 'i':
		printf("it is a vowel\n");
		break;
		case 'o':
		printf("it is a vowel\n");
		break;
		case 'u':
		printf("it is a vowel");
		break;
		case 'e':
		printf("it is a vowel");
		break;
		default:
			printf("entered character is a consonant");
		
	}
	return 0;
}
