//vowel check
#include<stdio.h>
int check(char ch);
void main()
{
char ch;

printf("\n Enter a letter from the English alphabet: ");
scanf("%c",&ch);
check(ch);
}

int check(char ch)
{
switch(ch)
{
   case 'a':
   case 'A':

   case 'e':
   case 'E':

    case 'i':
   case 'I':

   case 'o':
   case 'O':

   case 'u':
   case 'U':

printf("\n '%c ' is Vowel",ch);
break;

default:
printf("\n' %c ' is a Consonant",ch);
break;

return 0;

}
    }
