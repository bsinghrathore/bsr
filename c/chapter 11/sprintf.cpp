//sprintf()
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10;
    char ch='a';
    float a=3.12;
    char str[20];
    printf("\n%d %c %f",i,ch,a);
    sprintf(str,"\n%d %c %f",i,ch,a);
    printf("\n%s",str);
    getch();
}
