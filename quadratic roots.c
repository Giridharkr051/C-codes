//quadratic roots
#include <stdio.h>
#include <math.h>
void main()
{  int a, b, c, d;
  int root1, root2;

      printf("Enter a, b and c values for a quadratic equation \n");
      scanf("%d%d%d", &a, &b, &c);

  d = b*b - 4*a*c;
  if (d < 0)

  {      printf("First root = %f + i%f\n", (int)-b/(2*a), sqrt(-d)/(2*a));
         printf("Second root = %f - i%f\n", (int)-b/(2*a), sqrt(-d)/(2*a));
  }

 else

  {    root1 = (-b + sqrt(d))/(2*a);
       root2 = (-b - sqrt(d))/(2*a);
       printf("First root = %f\n", root1);
       printf("Second root = %f\n", root2);
  }
}
