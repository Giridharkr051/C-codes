//ARTHMETIC OPPARATIONS
#include <stdio.h>
void main()
{
   int x, y, *a, *b, sum,difference,product,quotient,remainder;

   printf("Enter two integers to add:\n");
   scanf("%d%d", &x, &y);

   a = &x;
   b = &y;
   sum = *a + *b;
   difference= *a - *b;
   product  = *a * *b;
   quotient = *a / *b;
   remainder = *a % *b;

   printf("Sum of the numbers = %d\n Difference between the numbers = %d\n Product of the two numbers = %d\n Quotient on dividing the numbers = %d\n Remainder on dividing the numbers = %d\n", sum,difference,product,quotient,remainder);
}
