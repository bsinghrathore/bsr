//determine entered keyword is a lowercase letter or not
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf(" enter the alphabet =");
    scanf("%c",&ch);
    (ch>=97 && ch<=122 ? printf("it is a lower case alphabet") : printf(" it is not a lower case alphabet"));
   getch();
}
 
    
