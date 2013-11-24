//program to convert farenheit to centigrade
#include<stdio.h>
#include<conio.h>
int main()
{
    float temp,cel;
    printf("enter the temp in farenheit\n  ");
    scanf("%f",&temp);
    cel=(temp-32)/1.8;
    printf("temp in centigrade %f  ",cel);
    getch();
}
