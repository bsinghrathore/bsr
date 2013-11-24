//program to print all the prime number from 1 to 300
#include<stdio.h>
#include<conio.h>
int main()
{

int number, div, ifprime;
printf("enter the number");
scanf("%d",&div);
for (number=2;number<div;number++)

{

{
if (div%number==0)
{

ifprime=0;
break;
}

ifprime=1;

}
}

if (ifprime)
{
printf("\nnumber is prime");
}
else
 {  
  printf("number is not prime");
 }


getch();
}
