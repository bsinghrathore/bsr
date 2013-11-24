//count chars,spaces,tabs and newlines in a file
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;
    int noc=0;
    int nob=0,nol=0,nod=0;
    fp=fopen("formatted.cpp","r");
    while(1)
    {
            ch=fgetc(fp);
            if(ch==EOF)
            break;
            
            noc++;
            
            if(ch==' ')
            nob++;
            if(ch=='\n')
            nol++;
            if(ch=='\t')
            nod++;
    }
            fclose(fp);
            printf("\n number of chracters =%d",noc);
            printf("\n number of blanks =%d",nob);
            printf("\n number of tabs =%d",nod);
            printf("\n number of lines =%d",nol);
            getch();
            }
            
            
