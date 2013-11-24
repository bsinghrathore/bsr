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
    
      int i,j,k,count=0;
      char c='e';
      for(i=0;i<6;i++)
      { 
           
        
        for(k=0;s[i][k]!='\0';k++)
        {
         if (c==s[i][k])
         {
                      count=count+1;
         }           
                             
        }
      } 
      printf("count %d=",count);
      getch();
      }
      
