#include<stdio.h>
#include<conio.h>

void printFibonacci(int);

int main()
{

    int k;
    long int i=0,j=1,f;


    printf("Fibonacci Series: ");
    printf("\n%d\n%d\n",0,1);
    printFibonacci(23);
getch();
  
}

void printFibonacci(int n)
{

    static int first=0,second=1,sum;

    if(n>0)
    {
         sum = first + second;
         first = second;
         second = sum;
         printf("%ld\n",sum);
         printFibonacci(n-1);
     }

}
