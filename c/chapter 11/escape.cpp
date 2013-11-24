//formatting string with all escape sequence
#include<stdio.h>
#include<conio.h>
int main()
{
    char firstname[]="sandy";
    char surname[]="malya";
    printf("\n%20s%20s",firstname,surname);
    printf("\n\t%20s%20s",firstname,surname);
    printf("\n\b%20s%20s",firstname,surname);
    printf("\n\r%20s%20s",firstname,surname);
    printf("\n\f%20s%20s",firstname,surname);
    printf("\n\a%20s%20s",firstname,surname);
    printf("\n\'%20s%20s",firstname,surname);
    printf("\n""%20s%20s",firstname,surname);
    printf("\n\\%20s%20s",firstname,surname);
    getch();
    }
