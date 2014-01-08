#include<iostream.h>
#include<conio.h>
void repchar(); 
void repchar(char ch);
void repchar(char ch, int n);
int main()
{
repchar();
repchar(‘=');
repchar(‘+’,30);
getch();
}

void repchar()
{
for(int j=0; j<45; j++) 
cout << ‘*’; 
cout << endl;
}
void repchar(char ch)
{
for(int j=0; j<45; j++) 
cout << ch; 
cout << endl;
}
void repchar(char ch, int n)
{
for(int j=0; j<n; j++) 
cout << ch; 
cout << endl;
}
