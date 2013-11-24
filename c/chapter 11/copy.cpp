//copy one file content to another
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*fs,*ft;
    char ch; 
    
    fs=fopen("formatted.cpp","r");
    if(fs==NULL)
    {
                puts("cannot open source file");
     }
     ft=fopen("bsr.cpp","w");
     if(ft==NULL)
    {
                puts("cannot open target file");
     fclose(fs);
     }
     while(1)
     {
             ch=fgetc(fs);
             if(ch==EOF)
             break;
             else
             fputc(ch,ft);
             }
             fclose(fs);
             fclose(ft);
             getch();
}
