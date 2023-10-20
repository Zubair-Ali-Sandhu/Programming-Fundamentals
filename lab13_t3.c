#include<stdio.h>
int main()
{
	char name[10];
	char pass[8];
	char passs[8];
	int r=0;
	do
	{
	printf("\nenter your name: ");
	scanf("%s",&name);
	
	
	
	printf("\nenter password: ");
	scanf("%s",&pass);
	int u=0;
	
	
	
	//printf("\n%s",name);
	//printf("\n%s",pass);
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(pass[i]=='!'||pass[i]=='*'||pass[i]=='&'||pass[i]=='^'||pass[i]=='%')
			{
				u=u+1;
			}
		}
	}
	if(u>=1)
	{
		printf("\nkindly re enter the password to see the secret message : ");
		scanf(" %s",&passs);
		if(pass[0]==passs[0]&&pass[1]==passs[1]&&pass[2]==passs[2]&&pass[3]==passs[3]&&pass[4]==passs[4]&&pass[5]==passs[5]&&pass[6]==passs[6]&&pass[7]==passs[7])
		{
		printf("\n allah buri nazar  se bachaye");
		r=1;
			
		}
		else
		{
			printf("\nkindly enter the same password as you entered above");
			printf("\nprocess is starting from begining \n now re enter your name and password");
		}
	}
	else
	{
		printf("\n kindly enter a valid password");
		printf("\nprocess is starting from begining \n now re enter your name and password");
	}
}
while(r==0);
	
}
