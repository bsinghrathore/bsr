//number raised to the power of anathor
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,power=1;
    printf("enter number 1 =");
    scanf("%d",&a);
    printf("enter number 2 =");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
     power=power*a;
    }
    printf("%d",power);
    getch();
}

    
