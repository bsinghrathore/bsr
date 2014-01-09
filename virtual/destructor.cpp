#include <iostream.h>
#include<conio.h>
class Base
{
public:
~Base() 

{ cout << "Base destroyed\n"; }
};

class Derv : public Base
{
public:
~Derv()
{ cout << "Derv destroyed\n"; }
};

int main()
{
Base* pBase = new Derv;
delete pBase;
getch();
}
