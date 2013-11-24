//read back the data stored through earlier program
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char another='y';
    char name[40];
    int age;
    float bs;
    fp=fopen("bbb.cpp","r");
    if(fp==NULL)
    {
                puts("can not open file");
    }
    while(fscanf(fp,"%s%d%f",name,&age,&bs)!=EOF)
    {
    printf("\nname %s\nage %d\nsalary %f\n",name,age,bs);
     }
     fclose(fp);
     getch();
}
