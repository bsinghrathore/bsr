
struct Distance 
{
int feet;
float inches;
};

void engldisp( Distance ); 
#include<iostream.h>
#include<conio.h>
int main()
{
Distance d1, d2; 

cout << "Enter feet:"; cin >> d1.feet;
cout << "Enter inches: "; cin >> d1.inches;

cout << "\nEnter feet: "; cin >> d2.feet;
cout << "Enter inches: "; cin >> d2.inches;
cout << "\nd1 = ";
engldisp(d1); 
cout << "\nd2 = ";
engldisp(d2); 
cout << endl;
getch();
}

void engldisp( Distance dd ) 
{
cout << dd.feet << "\’-" << dd.inches << "\"";
}
