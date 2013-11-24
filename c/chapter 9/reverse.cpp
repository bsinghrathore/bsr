#include<stdio.h>
#include<conio.h>
#include<string.h>
int reverse(char *s[],int len);
 
int main() 
{
   char *s[]={
              "to err is human...",
              "but to really mess things up...",
              "one nees to know c!!"
              };
 int i,len; 
 for(i=0;i<3;i++)
 {
  len=strlen(s[i]);            
  reverse(s,len);            
}
   getch();
}
 
int reverse(char *s[],int len) 
{
   int *a[3],k,l;
   for(k=0;k<3;k++)
   {
   for(l=len;s[k][l]!=s[0][0];l--)
    {       
       a[k][l]=s[k][l];
    } 
   }
    printf("reverse\n");
    for(k=0;k<3;k++)
   {
   for(l=0;a[k][l]!='\0';l++)
    {       
       printf("%s",a[k][l]);
    }
   } 
                 
}
