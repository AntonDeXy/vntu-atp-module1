#include <stdio.h>


int main(void)
{
   int a, b, sum = 0;

   printf("a: ");
   scanf("%i", &a);

   printf("b: ");
   scanf("%i", &b);

   for (int i = a; i <= b; i++) {
    sum += i;
   }

   printf("sum = %i", sum);
}