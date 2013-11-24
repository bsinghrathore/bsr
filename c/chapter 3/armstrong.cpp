//program to print amstrong number from 1 to 500
// min steps
#include<stdio.h>
#include<conio.h>
int main( )
{
int i,n,s,r;
printf("amstrong numbers are\n");
for(i=1;i<=500;i++)
{
n=i;
s=0;
while(n>0)
 {
  r=n%10;
  s=s+(r*r*r);
  n=n/10;
 }
if(i==s)
 {
  printf("%d\n",s);
 }
}
getch();
}

