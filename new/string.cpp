#include <iostream.h>
#include<conio.h>
int main()
{
const int DAYS = 7; 
const int MAX = 10; 
char star[DAYS][MAX] = { "Sunday", "Monday", "Tuesday",
"Wednesday", "Thursday",
"Friday", "Saturday" };
for(int j=0; j<DAYS; j++) 
cout << star[j] << endl;
getch();
}
