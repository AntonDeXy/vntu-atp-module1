#include <stdio.h>

int main(void)
{
   int n;
   int sum = 0;
   int k;

   printf("N: ");
   scanf("%i", &n);

   for (int i = 1; sum < n; i++) {
        sum += i;
        k = i;
   }

   printf("k = %i \n", k);
   printf("sum = %i", sum);
}
