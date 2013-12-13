#include<iostream.h>
#include<conio.h>
int x; 
int& setx(); 
int main()
{ 
setx() = 92; 
cout << "x=" << x << endl; 
getch();
}

int& setx()
{
return (x); 
}
