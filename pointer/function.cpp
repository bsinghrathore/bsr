#include <iostream.h>
#include<conio.h>
int main()
{
void dispstr(char*); 
char str[] = "Idle people have the least leisure.";
dispstr(str); 
getch();
}

void dispstr(char* ps)
{
while( *ps ) 
cout << *ps++; 
cout << endl;
}
