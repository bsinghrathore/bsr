#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    int b,*g;
    long c;
    float d;
    double e,*h;
    long double f;
    printf("size of char: %d\n", sizeof(a));
    printf("size of int: %d\n", sizeof(b));
    printf("size of long: %d\n", sizeof(c));
    printf("size of float: %d\n", sizeof(d));
    printf("size of double: %d\n", sizeof(e));
    printf("size of long double: %d\n", sizeof(f));
    printf("size of int pointer: %d\n", sizeof(g));
    printf("size of  double pointer: %d\n", sizeof(h));
      getch();
}
