//program to add first and last digit
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,sum;
    printf("enter a four digit number");
    scanf("%d",&a);
    b=(a%10);
    c=(a/1000);
    sum=b+c;
    printf("sum of first and last digit=%d",sum);
    getch();
}
        
