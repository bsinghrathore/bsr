//insurance company rules to calculate premium 
#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    char sex,healthy,live;
    printf("enter the age of person \n");
    scanf("%d",&age);
    fflush(stdin);
    printf("enter 'm' if the person is male or enter 'f' if the person is female\n");
   scanf("%c",&sex);
   fflush(stdin);
    printf("enter 'e' if person health is excellent or enter 'p' if person health is poor\n");
    scanf("%c",&healthy);
    fflush(stdin);
    printf("enter 'c' if the person lives in city or enter 'v' if the person  lives in village\n");
    scanf("%c",&live);
    if ((healthy == 'e' ) && (age>=25 && age<=35) && (live == 'c') && (sex == 'm'))
    {
     printf("premium is Rs4 per thousand and policy amount can not exceed 2 lakh\n");
    }
    else if((healthy == 'e' ) && (age>=25 && age<=35) && (live == 'c') && (sex == 'f'))
    {
     printf("premium is Rs3 per thousand and policy amount can not exceed 1 lakh\n");
    }
    else if((healthy == 'p' ) && (age>=25 && age<=35) && (live == 'v') && (sex == 'f'))
    {
     printf("premium is Rs6 per thousand and policy amount can not exceed 10,000\n");
    }
    else
    {
     printf("person is not insured\n");
    }
    getch();
}

    
    
