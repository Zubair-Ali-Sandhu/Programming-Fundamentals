#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void palindrome(char word[],int size)
{
	int s=0;
	char temp;
	char palind[size];
	for(int i=size;i>=0;i--)
	{
		//s=0;
		temp=word[i];
		palind[s]=temp;
		s++;
		
	}
  	bool check=strcmp(palind,word);
	if(check==0)
	{
		printf("\nit is palindrome");
	}
	else
	{
		printf("\n it is not a palindrome");
	}
	
}

int main()
{
	int size;
	printf("enter the size of your string:");
	scanf("%d",&size);
	char word[size];
	printf("enter your string:");
	scanf("%s",&word);
	//printf("%d",size);
	palindrome(word,size-1);
//	printf("%d",size);
	
	
	
}
