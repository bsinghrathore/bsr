#include <iostream.h>
#include<conio.h>
float getavg(float); 
int main()
{
float data=1, avg;
while( data != 0 )
{
cout << "Enter a number: ";
cin >> data;
avg = getavg(data);
cout << "New average is " << avg << endl;
}
getch();
}
float getavg(float newdata)
{
static float total = 0; 
static int count = 0; 
count++; 
total += newdata; 
return total / count; 
}
