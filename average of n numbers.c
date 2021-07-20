//average of n numbers
#include<stdio.h>
void main()
   {
       int n,a[50],sum=0,i;
       float avg;

 printf("Enter the number of numbers  you want to find the average: \n");
 scanf("%d",&n);

for(i=0;i<n;i++)
{
    printf(" Enter number\n");
    scanf("%d",&a[i]);

      sum=sum+a[i];
}
avg=(float)sum/n;
printf("The average = %f",avg);
}

