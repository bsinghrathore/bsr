//program to calculate aggregate and percentage of marks
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d,e,total;
    float percentage;
    printf("enter the marks 5 subjects of student \n ");
    scanf("%d\n%d\n%d\n%d\n%d\n",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=(total/5);
    printf("aggregate marks %d\n ",total);
    printf("percentage %f ",percentage);
    getch();
}
