//program to genetare all combination of 1 2 and 3
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
     for(j=1;j<=3;j++)
     {      
      for(k=1;k<=3;k++)
      {
       printf("%d%d%d\n",i,j,k);
      }
     }
    }
    getch();
} 
        
