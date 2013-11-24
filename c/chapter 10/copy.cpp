//copy whole and element by element
#include<stdio.h>
#include<conio.h>
int main()
{
struct employee
{
 
 float salary;
 int age;
};
struct employee e1={5500.50,30};
struct employee e2,e3;

    
    
    e2.salary=e1.salary;
    e2.age=e1.age;
    e3=e2;
    printf("\n%f %d",e1.salary,e1.age);
    printf("\n%f% d",e2.salary,e2.age);
    printf("\n%f %d",e3.salary,e3.age);
  
    getch();
}
