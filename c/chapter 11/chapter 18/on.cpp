//test whether a bit in a number is on or off
#include<stdio.h>
#include<conio.h>
int showbits(int decimal);
int main()
{
    int i=65,j;
    printf("\n decinal value of i=%d\n",i);
    printf(" binary equivalent:");
    showbits(i);
    j=i&32;
    if(j==0)
    {
     printf("\n its fifth bit is off");
    }
    else
    {
     printf("\n its fifth bit is on");
     } 
    j=i&64;
    if(j==0)
    {
     printf("\n its fifth bit is off");
    }
    else
    {
     printf("\n its sixth bit is on");
    } 
    getch();
}
int showbits(int decimal)
{
     int binary[100],i=0,j;
    
     while(decimal!=0)
     {

         binary[i++]= decimal % 2;

         decimal=decimal / 2;
      }
    
    
    for(j=0 ;j<i;j++)
    printf("%d",binary[j]);
}
