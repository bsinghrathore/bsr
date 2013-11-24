#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10];
    int i;
    printf("enter a string =");
    scanf("%s",&a);
    
    for(i=0;a[i]!='\0';i++);
    printf("length=%d",i);
    getch();
}
