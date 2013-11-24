//WAP to print multiplication table of a number till 20, where number is input by 
// formatting should output 2 x 1 = 2
// code should be formatted for easy readability
#include<stdio.h>
#include<conio.h>
int main()
{
   
     int table,n;
     printf("enter the number");
     scanf("%d",&table);
     printf("table of number\n");
     for(int i=1;i<=20;i++)
     {
     n=table*i;
     printf("%d * %d=%d\n",table,i,n);
             
     }
     getch();
}
             
