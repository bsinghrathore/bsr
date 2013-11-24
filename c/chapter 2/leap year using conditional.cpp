//leap year using conditional operators
#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("Enter the year =");
scanf ("%d", &year);
(year%100 == 0 ? (year%400 == 0 ? printf("The entered year is a leap year.") : printf("The entered year is not a leap year.")) : (year%4 == 0 ? printf("it is a leap year") : printf("not")));

 getch();
}
