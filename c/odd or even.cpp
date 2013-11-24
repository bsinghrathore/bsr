//WAP to print whethe a number is odd or even where number is input by user
// identify all the corner cases, e.g. 0
#include<stdio.h>
#include<conio.h>
int main()
{
     int n;
     printf("enter the number ");
     scanf("%d",&n);
     if(n%2==1)
     {
      printf("number is odd");
     }
     else 
     {
      printf("number is even");  
     }
     getch();
}
                    
