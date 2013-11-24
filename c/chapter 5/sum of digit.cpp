//program to add digit of number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,sum=0,dig;
    printf("enter a five digit number =");
    scanf("%d",&num);
    while(num!=0)
    {
      dig=num%10;
      sum=sum+dig;
      num=num/10;
    }
    printf("sum of digits=%d ",sum);
    getch();
}

      
