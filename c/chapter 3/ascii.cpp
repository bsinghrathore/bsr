//program to print ascii value and their equivalent character
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    long int i=0;
    while(i!=256)
    {
     ch=i;
     printf("ascii value %d= %c\n",i,ch);
     i++;
    }
     getch();
}
