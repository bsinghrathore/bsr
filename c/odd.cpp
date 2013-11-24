//WAP to print nth odd number, where n is input by user
// identify all corner case e.g. 0
// formula can be simplified
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,odd ;
    printf("enter the place of odd number");
    scanf("%d",&n);
    odd=n*2-1;
    printf("odd number %d",odd);
    getch();
}
     
