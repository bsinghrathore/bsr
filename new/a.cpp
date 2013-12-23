#include<iostream.h>
#include<conio.h>
using namespace std;
class Distance 
{
private:
int feet;
float inches;
public:
void getdist() 
{
cout<< "Enter feet:"; 
cin >> feet;
cout << " Enter inches: "; 
cin >> inches;
}
void showdist() 
{ cout << feet << inches ; }
};

int main()
{
Distance dist[100]; 
int n=0; 
char ans; 
cout << endl;
do { 
cout << "Enter distance number " << n+1;
dist[n++].getdist(); 
cout << "Enter another (y/n)?: ";
cin >> ans;
} while( ans != ‘n’ ); 
for(int j=0; j<n; j++) 
{
cout << "\nDistance number " << j+1 << " is ";
dist[j].showdist();
}
cout << endl;
getch();
}
