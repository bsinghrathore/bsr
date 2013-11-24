//program to print all the prime number from 1 to 300
#include<stdio.h>
#include<conio.h>
int main()
{

int number, div, ifprime;
for (number=2;number<=300;number++)

{

for (div=2; div<number; div++)

{
if (number%div==0)
{

ifprime=0;
break;
}

ifprime=1;

}

if (ifprime)
{
printf("\n%d", number);

}
}
getch();
}
