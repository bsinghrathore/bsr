//read strings from the file and displays them on to the screen
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[80];
    fp=fopen("formatted.cpp","r");
    if(fp==NULL)
    {
                puts("cannot open file");
    }
    while(fgets(s,79,fp)!=NULL)
    {
              printf("%s",s);             
    }
    fclose(fp);
    getch();
}
