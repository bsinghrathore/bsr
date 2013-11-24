//writing record to a file using structure
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char another='y';
    struct emp 
    {
           char name[40];
           int age;
           float bs;
    };
    struct emp e;
    fp=fopen("bbb.cpp","w");
    
    if(fp==NULL)
    {
                puts("can not open file");
    }
    while(another=='y')
    {
     printf("\n enter name,age,and salary\n");
     scanf("%s%d%f",e.name,&e.age,&e.bs);
     fprintf(fp,"name %s\nage %d\nsalary %f",e.name,e.age,e.bs);
     
     printf("\n another employee(y/n)\n");
     fflush(stdin);
     another=getche();
     }
     fclose(fp);
     getch();
}
