//circle
#include<stdio.h>
void main()
{

      int radius,diameter,circumference,area,pi=3.14;

    printf("Enter the radius of the circle: \n");
    scanf("%d",&radius);

    if(radius>3)
{
    diameter=2*radius;
   circumference=2*pi*radius;
   area=pi*radius*radius;

        printf("Diameter= %d \n Circumference=%d \n Area=%d",diameter,circumference,area);
}
else{printf("Error,radius too small");
}
}
