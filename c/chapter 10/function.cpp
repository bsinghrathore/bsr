//passing structure element to function
#include<stdio.h>
#include<conio.h>
int display(char*s,float t,int p);
int main()
{
    struct book
 {
 char name[25];
 float price;
 int pages;
};
struct book b1={"book",130.00,500};
    display(b1.name,b1.price,b1.pages);
    getch();
}
int display(char*s,float t,int p)
{ 
    printf("\nname=%s\n",s);
    printf("\price=%f\n",t);
    printf("\naddress=%d\n",p);
}
