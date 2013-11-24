//program to convert distance from kilometer into m,cm,feet,inch
#include<stdio.h>
#include<conio.h>
int main()
{
     int a,b,c,e;
     float d;
     printf("enter the distance in km ");
     scanf("%d",&a);
     b=(1000*a);
     c=100000*a;
     d=(b*3.2808);
     e=d*12;
     printf(" meter %d\n ",b);
     printf("centimeter %d\n ",c);
     printf("feet %f\n ",d);
     printf("inch %d\n ",e);
     getch();
     
     }
     
