//time to min
#include<stdio.h>

int minutes(int a,int b)
{
return b+(60*a);
}

void main()
{
int a,b,result;

printf(" Enter the number of hours and minutes\n ");
scanf("%d %d",&a,&b);
result=minutes(a,b);
printf("\n Total Number of Minutes: %d",result);
}
