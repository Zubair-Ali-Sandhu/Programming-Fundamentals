#include<stdio.h>
void encrypt(char str[],int size)
{
	char temp;
	//int size=sizeof(str)/sizeof(str[0]);
	char enc[size];
	for(int i=0;i<size;i++)
	{
		temp=str[i];
		for(int j=1;j<=3;j++)
		{
			if(temp=='x'||temp=='X'||temp=='y'||temp=='Y'||temp=='z'||temp=='Z')
			{
				if(temp=='z'||temp=='Z')
				{
					temp='c';
				}
				else if(temp=='y'||temp=='Y')
				{
					temp='b';
				}
				else if(temp=='x'||temp=='X')
				{
					temp=='a';
				}
				else
				{
					temp++;
				}
				j=3;
			}
			else if(temp==' ')
			{
				temp=' ';
			}
			else
			{
				temp++;
			}
		}
		//printf("%c",temp);
		enc[i]=temp;	
	}
	//printf("%s",enc);
	for(int i=0;i<size;i++)
	{
		printf("%c",enc[i]);
	}
}
void decrypt(char str[],int size)
{
	char temp;
	//int size=sizeof(str)/sizeof(str[0]);
	char enc[size];
	for(int i=0;i<size;i++)
	{
		temp=str[i];
		for(int j=1;j<=3;j++)
		{
			if(temp=='a'||temp=='A'||temp=='b'||temp=='B'||temp=='c'||temp=='C')
			{
				if(temp=='a'||temp=='A')
				{
					temp='x';
				}
				else if(temp=='b'||temp=='B')
				{
					temp='y';
				}
				else if(temp=='c'||temp=='C')
				{
					temp=='x';
				}
				else
				{
					temp--;
				}
				j=3;
			}
			else if(temp==' ')
			{
				temp=' ';
			}
			else
			{
				temp--;
			}
		}
		//printf("%c",temp);
		enc[i]=temp;	
	}
	for(int i=0;i<size-1;i++)
	{
		printf(" %c",enc[i]);
	}
}

int main()
{
	int size;
	int choice;
	printf("\n enter the size of string:");
	scanf(" %d",&size);
	char string[size];
	printf("enter your string:");
	//fgets( string, sizeof(string), stdin); // read string
	scanf(" %[^\n]s",string);
	
	printf("enter your choice \n enter 1 for encryption \n enetr 2 for decryption:");
	scanf("%d",&choice);
		if(choice==1)
		{
			encrypt(string,size);
		}
		else if(choice==2)
		{
			decrypt(string,size);
			
		}
		else
		{
			printf("invalid input");
		}
}
