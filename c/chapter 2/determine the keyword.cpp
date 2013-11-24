//determine entered keyword is a small letter,capital letter,a digit or special symbol
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter the character =");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
     printf("it is capital letter");
    }
    else if(ch>=97 && ch<=122)
    {
     printf("it is a lower case letter");
    }
    else if(ch>=48 && ch<=57)
    {
     printf("it is a digit");
    }
    else 
    {
     printf("it is a special symbol");
    }

    getch();
}
