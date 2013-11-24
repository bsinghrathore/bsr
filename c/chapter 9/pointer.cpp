#include<stdio.h>
#include<conio.h>
int main()
{
    int a=10;
    int *b=&a;
    int c[10]={1,2,3},*p;
    p=&c[2];
    
    printf("value of a=%d value of b=%d",a,b);
    printf("value of a=%d value of b=%d",a,*b);
    printf("value of p=%d",p);
    p=c;
    printf("p=%d",p[2]);
    getch();
}
    
    

