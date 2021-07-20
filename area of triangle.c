//area of triangle

#include <stdio.h>
#include <math.h>

float area_of_triangle(int,int, int);
void main()
{
     float a, b, c, area;
     printf("Enter the lengths of sides of a triangle\n");
     scanf("%f%f%f", &a, &b, &c);
     area = area_of_triangle(a, b, c);
     printf("Area of the triangle = %.4lf\n", area);
}

float area_of_triangle(int a, int b, int c)

{   float s, area;
  s = (a+b+c)/2;
  area = sqrt(s*(s-a)*(s-b)*(s-c));
  return area;
}
