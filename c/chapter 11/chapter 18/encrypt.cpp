#include<stdio.h>
#include<conio.h>
void  encrypt();
int main()
{
    encrypt();
     getch();
     }
  
 void  encrypt()
   {
        FILE *fs,*ft;
        char ch;

        fs=fopen("textr.txt","r");
        ft=fopen("bsr.c","w");
        if(fs==NULL||ft==NULL)
        {
                              printf("error");
        }
        while((ch=getc(fs))!=EOF)
        {
                                 putc(~ch,ft);
        }
        fclose(fs);
        fclose(ft);
        
        }
        
                                 
          
