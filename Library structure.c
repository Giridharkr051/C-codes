//Library structure
#include <stdio.h>
void main()
{
struct book
{
char author[20];
char title[20];
float price;
int no_pages;
char publication[20];
}book1,book2,book3;

printf("Enter the book-1 details: Author,title,price,number of pages,date of publication\n");
scanf("%s %s %f %d %s",book1.author,book1.title,&book1.price,&book1.no_pages,book1.publication);

printf("Enter the book-2 details: Author,title,price,number of pages,date of publication\n");
scanf("%s %s %f %d %s",book2.author,book2.title,&book2.price,&book2.no_pages,book2.publication);

printf("Enter the book-3 details: Author,title,price,number of pages,date of publication\n");
scanf("%s %s %f %d%s",book3.author,book3.title,&book3.price,&book3.no_pages,book3.publication);

if(book1.price>=book2.price && book1.price>=book3.price)
{
printf("\n Book-1 has the highest price:Its details are:\n Author=%s\n Title=%s\n Price=%f\n Number of pages=%d\n Date of publication=%s\n",book1.author,book1.title,book1.price,book1.no_pages,book1.publication);
}
else if (book2.price>=book1.price && book2.price>=book3.price)
{
printf("\n Book-2 has the highest price:Its details are: \nAuthor=%s\n Title=%s\n Price=%f\n Number of pages=%d\n Date of publication=%s\n",book2.author,book2.title,book2.price,book2.no_pages,book2.publication);
}
else
{
printf("\n Book-3 has the highest price:Its details are:\n Author=%s\n Title=%s\n Price=%f\n Number of pages=%d\n Date of publication=%s\n",book3.author,book3.title,book3.price,book3.no_pages,book3.publication);
}
}
