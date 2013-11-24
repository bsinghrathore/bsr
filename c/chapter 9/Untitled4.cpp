//count number of e 
#include<stdio.h>
#include<conio.h>
int main()
{
char *s[]={
          "we will teach you how to...",
          "move a mountain",
          "level a building",
          "erase the past",
          "make a million",
          "...all through c!"
          };
    
      int i,j,count=0;
      char *c;
      for(i=0;s[i]<6;i++)
      {
           while(*s!='\0')
           {            
               *c=*s;
               if(*c=='e')
               {
                count=count+1;
               } 
                s++;
                } 
      }
      printf("count %d=",count);
      getch();
      }
