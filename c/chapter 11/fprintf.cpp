//use of and fprintf()
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char another='y';
    char name[40];
    int age;
    float bs;
    fp=fopen("bbb.cpp","w");
    if(fp==NULL)
    {
                puts("can not open file");
    }
    while(another=='y')
    {
     printf("\n enter name,age,and salary\n");
     scanf("%s%d%f",name,&age,&bs);
     fprintf(fp,"name %s\nage %d\nsalary %f",name,&age,&bs);
     
     printf("\n another employee(y/n)\n");
     fflush(stdin);
     another=getche();
     }
     fclose(fp);
     getch();
}
     
