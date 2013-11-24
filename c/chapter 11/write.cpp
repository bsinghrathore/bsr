//receive string from keyboard and write them to file
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[80];
    fp=fopen("bbb.cpp","w");
    if(fp==NULL)
    {
                puts("cannot open file");
    }
    printf("\nenter a few line of text\n");
    while(strlen(gets(s))>0)
    {
                           fputs(s,fp);
                           fputs("\n");
    }
    fclose(fp);
    getch();
}
                           
