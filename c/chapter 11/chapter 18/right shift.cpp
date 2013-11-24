#include<stdio.h>
#include<conio.h>
int showbits(int decimal);
int main()
{
    int i=5225,j,k;
    printf("\ndecimal %d is same as binary",i);
    showbits(i);
    
    for(j=0;j<=5;j++)
    {
        k=i>>j;             
     printf("\n%d rightshift %dgives ",i,j);
     showbits(k) ;
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
    
    
     for(j =i-1 ;j>=0;j--)
    printf("%d",binary[j]);
}
