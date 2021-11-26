#include <stdio.h>

int main(void)
{
   int month;

   printf("month num (1 - 12): ");
   scanf("%i", &month);

   switch(month){
      case 1:
      case 2:
      case 12:
        printf("winter");
        break;
      case 3:
      case 4:
      case 5:
        printf("spring");
        break;
      case 6:
      case 7:
      case 8:
        printf("summer");
        break;
      default:
        printf("autumn");
   }
}
