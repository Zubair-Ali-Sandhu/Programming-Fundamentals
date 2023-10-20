#include<stdio.h>
int main()
{
int sec=1000000;
int d=sec/86400;
int h=sec%86400;

int m=h%3600;
int s=m%60;
 m=m/60;
h=h/3600;

printf("%ddays %dhours %dminutes %dseconds",d,h,m,s);
return 0;
}
// zubair ali cs-1c ; program to convert seconds into DD:HH:MM:SS 
