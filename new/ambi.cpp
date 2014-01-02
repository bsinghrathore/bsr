#include <iostream.h>
#include<conio.h>
class A
{
public:
void show() { cout << "Class A\n"; }
};
class B
{
public:
void show() { cout << "Class B\n"; }
};
class C : public A, public B
{
};

int main()
{
C objC; 

objC.A::show(); 
objC.B::show(); 
getch();
}
