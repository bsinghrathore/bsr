//reverse and compare a five digit number
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,reverse=0,com;
    printf(" enter a five digit number  =");
    scanf("%d",&num);
    com=num;
    while(num!=0)
    {
     reverse=reverse*10;
     reverse=reverse+num%10;
     num=num/10;
                 
    }
    printf(" reverse of number = %d\n ",reverse);
    
    if(com == reverse)
    		printf(" number and  reverse are equal\n");
    	else
    		printf(" number and reverse are not equal\n");
    
    getch();
}

     
