#include<iostream.h>
#include<conio.h>
int main()
{ 
int intarray[5] = { 31, 54, 77, 52, 93 };
for(int j=0; j<5; j++) 
cout << *(intarray+j) << endl; 
getch();
}
