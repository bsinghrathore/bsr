//array
#include<stdio.h>
#include<conio.h>

int main()
{ 
    struct book
{
 char name[10];
 float price;
 int pages;
};
struct book b[10];
    
    int i;
 for(i=0;i<10;i++)
 { printf("enter name,price and pages\n");
    scanf("\nname%s",&b[i].name);
    scanf("\nprice%f",&b[i].price);
    scanf("\npages%d",&b[i].pages);
 }
     for(i=0;i<10;i++)
 {
    printf("\nname%s",b[i].name);
    printf("\nprice%f",b[i].price);
    printf("\npages%d",b[i].pages);
  }
    getch();
}
