//program to calculate the gross salary
#include<stdio.h>
#include<conio.h>
int main()
{
    float salary,d,r,gross;
    printf("enter the basic salary ");
    scanf("%f",&salary);
    gross=salary+(0.4*salary)+(0.2*salary);
    printf("gross salary =   %f ",gross);
    getch();
}
