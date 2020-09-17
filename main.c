
#include <stdio.h>
#include "AmstrongNumber.h"

int main() {
   int n, flag;
   printf("Enter a positive integer: ");
   scanf("%d", &n);

   // check Armstrong number
   flag = AmstrongNumber(n);
   if (flag == 1)
      printf("%d is an Amstrong number.", n);
   else
      printf("%d is not an Amstrong number.", n);
   return 0;
}
