//how element are stored
#include<stdio.h>
#include<conio.h>
struct book
{
 char name;
 float price;
 int pages;
};
struct book b1={'b',130.00,500};
int main()
{
    printf("\naddress%u",&b1.name);
    printf("\naddress%u",&b1.price);
    printf("\naddress%u",&b1.pages);
    getch();
}

