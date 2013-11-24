//calculate the factorial
// min no of var
#include<stdio.h>
#include<conio.h>
int main()
{
int num,factorial;
printf("Enter the number =:");
scanf ("%d",&num);
factorial=1;
while ( num > 1)
{
factorial=factorial*num;
num= num-1;
}
printf("The factorial of the entered number is:%d", factorial);
getch();
}
