//calculation of approximate level of intelligence
#include<stdio.h>
#include<conio.h>
int main()
{
 int y;
 float x,i;
 for(y=1;y<=6;y++)
 {
  for(x=5.5;x<=12.5;x=x+0.5)
  {
   i=2+(y+(0.5*x));
   printf("y=%d  x=%f  intelligence i=%f   \n\n",y,x,i);
  }
 }
 getch();
}
