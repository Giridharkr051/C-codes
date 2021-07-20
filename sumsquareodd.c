//sumsquareodd
#include<stdio.h>
void main()
{
      int n,i,sum=0;
    printf("Enter the number of odd numbers : \n ");
      scanf("%d",&n);
      for(i=1;i<=(2*n);i++)


     if(i%2!=0)

   {
      sum=sum+(i*i);
   }


 printf("The sum of squares of first %d odd numbers = %d",n,sum);
}
