//enter the string from the keyboard and print them on to a file
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;

    char c;
    fp=fopen("bbb.cpp","w");
    if(fp==NULL)
    {
                puts("can not open file");
    }
    
    
     printf("\n enter the string= ");
    
     while(c!='~')
     {
         c=getche();
         if(c=='~')
         {
                   break;
         }
         fprintf(fp,"%c",c);
    
    fflush(stdin);
    
    }
   fclose(fp);
     getch();
}
     
