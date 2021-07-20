//Develop a C program to enter a number and calculate the sum of its digits

 #include<stdio.h>
 int main()
{
     int num,sum=0,m;
     printf("Enter a number:");
     scanf("%d",&num);

     while (num>0)
{
  m=num%10;
  sum=sum+m;
  num=num/10;
}

printf("Sum is=%d",sum);


return 0;
}
