#include<iostream.h>
#include<string.h> 
#include<conio.h>
int main()
{
char* str = "Idle hands are the devil’s workshop.";
int len = strlen(str); 
char* ptr; 
ptr = new char[len+1]; 
strcpy(ptr, str); 
cout << "ptr=" << ptr << endl; 
delete[] ptr; 
getch();
}
