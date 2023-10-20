#include <stdio.h>

int main ()
{
   int num1, num2, i, j, a;

   printf("Enter starting number:");
   scanf("%d",&num1);
   printf("Enter ending number:");
   scanf("%d",&num2);

   printf("Prime numbers between %d and %d are:\n", num1, num2);
   for (i = num1 + 1; i < num2; ++i)
   {
      a = 0; 
      for (j = 2; j <= i/2; ++j)
      {
         if (i % j == 0)
         {
            a = 1;
            break;
         }
      }
      if (a == 0) 
          printf("%d\t", i);
   }
   return 0;
}
