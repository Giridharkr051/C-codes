// addition of 2 matrices
#include<stdio.h>
void main()
{
int a[50][50],b[50][50],sum[50][50],row1,row2,col1,col2,i,j;
printf("Enter the number of rows and columns of array 1: \n");
scanf("%d%d",&row1,&col1);
for(i=0;i<row1;i++)
{printf("Enter the elements of row %d: \n",(i+1));
for(j=0;j<col1;j++)
{scanf("%d",&a[i][j]);}
}
printf("Enter the number of rows and columns of array 2: \n");
scanf("%d%d",&row2,&col2);
for(i=0;i<row2;i++)
{printf("Enter the elements of row %d : \n",(i+1));
for(j=0;j<col2;j++)
{scanf("%d",&b[i][j]);}
}
if(row1!=row2 && col1!=col2)
{printf("The two matrices need to have equal number of rows and columns to add! \n");
exit(0);}
else
{
for(i=0;i<row1;i++)
{ sum[i][j]=0;
for(j=0;j<col1;j++)
{sum[i][j]= a[i][j]+b[i][j];}
}
printf("The sum of the two arrays is as follows: \n");
for(i=0;i<row1;i++)
{for(j=0;j<col1;j++)
{printf("%d \t",sum[i][j]);
}
printf("\n");}
}
}
