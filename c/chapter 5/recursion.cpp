//sum of digits using recursion
#include<conio.h>
#include<stdio.h>
int main()
{
   int sumdigit(int x);
   int n,sum;
 
   printf ("Enter five digit Integer number =");
   scanf("%d",&n);
   sum=sumdigit(n);
   printf ("Sum of Digits= %d", sum);
   getch();
}
int sumdigit(int x)
{
  int s=0,d;
  if(x==0)
  { 
   return (0);
  }
  d= x%10;
  s=s+d+sumdigit(x/10);
  return(s);
}
