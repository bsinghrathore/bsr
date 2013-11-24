//addition of first seven terms
#include<stdio.h>
#include<conio.h>
int main()
{
    float fact=1;
    int f;
    float add=0.0;
    for(int i=1;i<=7;i++)
    { f=i;
    while(i>=1)
    { 
     fact=fact*i;
     i=i-1;
    }
    i=f;
     add=add+(i/fact);
    }
 printf("addtion%f",add);
 getch();
} 
