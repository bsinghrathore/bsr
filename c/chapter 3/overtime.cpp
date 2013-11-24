//calculate the overtime pay
#include<stdio.h>
#include<conio.h>
int main()
{
    int hour,overtime,pay,i;
    for(i=1;i<=10;i++)
    {
     printf("enter the number of hours worked above 40 hours by employee %d \n",i);
     scanf("%d",&hour);
     overtime=12*hour;
     printf("overtime pay of  employees= %d \n\n",overtime);
    }
    getch();
}

    
