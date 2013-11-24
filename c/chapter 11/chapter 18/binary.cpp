//print the binary equivalent using showbits
#include<stdio.h>
#include<conio.h>
int showbits(int decimal);
int main()
{
    int j;
    printf("\ndecimal=0 is same as binary equivalent :0");
    for(j=0;j<5;j++)
    {
     printf("\ndecimal=%d is same as binary equivalent :",j+1);
     showbits(j+1) ;
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
