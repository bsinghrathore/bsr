//check file exist or not
#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    fp=fopen("formatted.cpp","r");
    if(fp==NULL)
    {
     puts("file not exist");
     
     }
     else 
     {
          printf("file exist");
     }
     getch();
}
