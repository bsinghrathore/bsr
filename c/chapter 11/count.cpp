//type any file name and count the number of character in it
#include<stdio.h>
#include<conio.h>
int main()
{
int noc=0;
FILE *fr;
char fname[20],ch;
printf("\n enter the source file name= ");
gets(fname);
fr=fopen(fname,"r");
if(fr==NULL)
{
printf("\n error \n");

}
ch=fgetc(fr);
while(ch!=EOF)
{
noc++;

ch=fgetc(fr);
}
fclose(fr);
printf("\n total no of character=%d",noc);

getch();
}
