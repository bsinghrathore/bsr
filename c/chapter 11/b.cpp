//agrc and argvp[]
#include<stdio.h>
#include<conio.h>
int main(int argc,char*argv[])
{
    
    FILE*fs,*ft;
    char ch; 
    if(argc!=3)
    {
               puts("insufficent arguments");
               getch();
        return(1);
    }
    fs=fopen(argv[1],"r");
    if(fs==NULL)
    {
                puts("cannot open source file");
                getch();
        return(1);
     }
     ft=fopen(argv[2],"w");
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
             
     
