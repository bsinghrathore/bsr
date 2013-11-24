//nested structure
#include<stdio.h>
#include<conio.h>
int main()
{
    struct address
    {
      int phone;
      int pin;
      };     
struct employee
{
 
 float salary;
 struct address a;
};
struct employee e={5500.50,1,10};
printf("\nsalary=%f phone=%d pin=%d",e.salary,e.a.phone,e.a.pin);
getch();
}
