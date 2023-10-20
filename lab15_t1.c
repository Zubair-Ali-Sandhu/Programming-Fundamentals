#include<stdio.h>
#include<string.h>
int main()
{
	char choice;
	int size;
	do
	{
		printf("\n enter the size of string:");
			scanf(" %d",&size);
			char string[size];
			printf("enter your string:");
			scanf("%s",&string);
		printf("enter your choice\n Enter A to Count the number of vowels in the string\n Enter B to Count both the vowels and consonants in the string\n Enter C to Display the most frequent character in the string\n Enter D to Concatenate another string with the existing string \n Enter E to Exit the program:");
		scanf(" %c",&choice);
		if(choice=='a'||choice=='A')
		{
			
			int count=0;
			for(int i=0;i<size;i++)
			{
				if(string[i]=='a'||string[i]=='A'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'||string[i]=='e'||string[i]=='E')
				{
					count=count+1;
				}
			}
			printf("\nthere are %d vowels in your string\n",count);
		}
		else if(choice=='b'||choice=='B')
		{
			
			int count=0;
			int count1=0;
			for(int i=0;i<size;i++)
			{
				if(string[i]=='a'||string[i]=='A'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'||string[i]=='e'||string[i]=='E')
				{
					count=count+1;
				}
				else
				{
					count1=count1+1;
				}
			}
			printf("\nthere are %d vowels and %d consonants in your string\n",count,count1);
			
		}
		else if(choice=='c'||choice=='C')
		{
			
			int count=0;
			int count1=0;
			char temp;
			for(int j=0;j<size;j++)
			{
				for(int i=0;i<size;i++)
				{
				if(string[j]==string[i])
				{
					count=count+1;
				}
				//printf("\nthere are %d vowels in your string\n",count);
				}
				if(count>count1)
				{
					temp=string[j];
					count1=count;
					count=0;
				}
				count=0;
				
			}
			printf("\n%c is the most frequent character in your string\n",temp);
		}
		else if(choice=='d'||choice=='D')
		{
			int size1;
			printf("enter the size of new string:");
			scanf(" %d",&size1);
			char sec[size1];
			printf("enter your new string:");
			scanf("%s",&sec);
			strcat(string,sec);
			printf("the concatenated string is '%s'",string);
			
			
		}
		else if(choice=='e'||'E')
		{
			printf("\n thanks for using my program");
			break;
		}
		else
		{
			printf("invalid input");
		}
	}
	
	while(choice!='e'||choice!='E');
}
