#include<iostream.h>
#include<conio.h>
int main()
{
void copystr(char*, const char*); 
char* str1 = "Self-conquest is the greatest victory.";
char str2[80]; 
copystr(str2, str1); 
cout << str2 << endl; 
getch();
}
void copystr(char* dest, const char* src)
{
while( *src ) 
{
*dest++ = *src++;
}
}

