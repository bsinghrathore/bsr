//passing address of a structure variable
#include<stdio.h>
#include<conio.h>
int display(struct book *b);
struct book
 {
 char name[25];
 float price;
 int pages;
 };
int main()
{
    
struct book b1={"book",130.00,500};
    display(&b1);
    getch();
}
int display(struct book *b)
{ 
    printf("\nname=%s\n",b->name);
    printf("\price=%f\n",b->price);
    printf("\naddress=%d\n",b->pages);
}
