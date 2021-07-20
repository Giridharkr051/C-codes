//inter change large and low no.
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,max,min,maxpos,minpos,i,temp;
	printf("Enter number of elements(maxlimit 50): ");
	scanf("%d",&n);
	printf("\nenter any %d integers:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    max=a[0];
	min=a[0];
	maxpos=0;
	minpos=0;
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			maxpos=i;

		}
		if(a[i]<min)
		{
			min=a[i];
			minpos=i;
		}
	}
	temp=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=temp;

	for(i=1;i<n;i++)
    {
        printf("\nminimum value is %d at position %d",min,minpos+1);
        printf("\nmaximum value is %d at position %d",max,maxpos+1);
        break;
    }
    printf("\nAfter interchange array elemnts are: ");
	for(i=0;i<n;i++)
		{
		    printf(" %d ",a[i]);
        }
	getch();
}
