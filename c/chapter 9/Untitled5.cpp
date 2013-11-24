#include<stdio.h>
#include<conio.h>
int main()
{
    char *name[]={
                  "akshay",
                  "parag",
                   "raman",
                   "srinivas"
                   };
                   char *temp;
                   printf("original \n%s %s",name[2],name[3]);
                   temp=name[2];
                   name[2]=name[3];
                   name[3]=temp;
                   printf("\n new \n%s %s",name[2],name[3]);
                   getch();
                   }
                   
