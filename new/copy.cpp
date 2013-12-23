#include<iostream.h>
#include<cstring.h>
#include<conio.h> 
int main()
{ 
    int j;
char str1[] = "Oh, Captain, my Captain! "
"our fearful trip is done";
const int MAX = 80; 
char str2[MAX]; 
for(j=0; j<strlen(str1); j++) 
str2[j] = str1[j]; 
str2[j] = '\0'; 
cout << str2 << endl; 
getch();
}
