#include<stdio.h>
int main()
{
 char a;
 printf("do you want burger y or n:\n");
 scanf(" %c",&a);
 char  b;	
  if((a=='y')||(a=='Y'))
  {
  	printf("burger added \n do you want drink and fries just for 200 Y/N\n");
  	scanf(" \n %c",&b);
  	
	   if((b=='Y')||(b=='y'))
	  {
  		printf("fries and drink  added \n thank you\n");
  		printf("your total bill is 500");
	  }
	  else if((b=='n')||(b=='N'))
	  {
	  	printf("your choice \n your total bill is 300\n thank you\n");
	  }
	  else
	  {
	  	printf("invalid input\n");
	  }
}
    else if((a=='n')||(a=='N'))
  {
  	printf(" your choice \n thank you \n see you next time\n");
  }
  else
  {
  	printf("invalid input\n");
  }
  return 0;
}

