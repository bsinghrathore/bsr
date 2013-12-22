#include<iostream.h>
#include<conio.h>
int main()
{
int age[4],j;
for(j=0; j<4; j++) 
{
cout << "Enter an age: ";
cin >> age[j]; 
}
for(j=0; j<4; j++)
{ 
cout << "You entered " << age[j] << endl;
}
getch();
}
