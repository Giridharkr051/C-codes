//file handling
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[40];
    FILE *fptr;
    fptr=fopen("filesbasic.txt","w");
    if(fptr==NULL){
        printf("error");
    }
    printf("Enter the input\n ");
   gets(str);

   fprintf(fptr,"%s",str);
   fclose(fptr);
   fptr=fopen("filesbasic.txt","r");
   if(fptr==NULL){
       printf("error");
   }
   printf("\n output:\n");
   fgets(str,40,fptr);
   puts(str);
   fclose(fptr);

return 0;
}
