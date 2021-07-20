//stdt details
#include<stdio.h>
#include<string.h>

void main()
{
       struct student
{
char roll_number[100];
char name[100],sec[30],dept[50];
int result,fees;
}
stud1,stud2;

printf("Enter the details of student 1: \n");
printf("Name: ");
scanf("%s",stud1.name);
printf("Section: ");
scanf("%s",stud1.sec);
printf("Roll number: ");
scanf("%s",&stud1.roll_number);
printf("Department: ");
scanf("%s",&stud1.dept);
printf("Fees: ");
scanf("%d",&stud1.fees);
printf("Result: ");
scanf("%d",&stud1.result);

printf("\nEnter the details of student 2: \n");
printf("Name: ");
scanf("%s",stud2.name);
printf("Section: ");
scanf("%s",stud2.sec);
printf("Roll number: ");
scanf("%s",&stud2.roll_number);
printf("Department: ");
scanf("%s",&stud2.dept);
printf("Fees: ");
scanf("%d",&stud2.fees);
printf("Result: ");
scanf("%d",&stud2.result);

if(stud1.result>=stud2.result)
{
printf("\n Student 1 got the highest marks \n The details of the student is as follows: \n Name:%s\n Section:%s\n Roll number:%s\n Department:%s\n Fees:%d\n Result:%d",stud1.name,stud1.sec,stud1.roll_number,stud1.dept,stud1.fees,stud1.result);
}
else if(stud2.result>=stud1.result)
{
printf("Student 2 got the highest marks \n The details of the student is as follows: \n Name:%s\n Section:%s\n Roll number:%s\n Department:%s\n Fees:%d\n Result:%d",stud2.name,stud2.sec,stud2.roll_number,stud2.dept,stud2.fees,stud2.result);
}
else
{
printf("Both the students got the same marks\n");
}
}
