//array
#include<stdio.h>
#include<conio.h>
//int mul(int x);
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int product;
    for(int i=0;i<10;i++)
    {
     product= mul(a[i]);
     printf("new array after operation\n%d",product);
    }
    getch();
}
int mul(int x)
{
  int d;
  d=x*3;
  return(d);

     
}
     
