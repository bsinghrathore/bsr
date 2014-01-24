#include<iostream.h>
#include<conio.h>
class student
{ 
  private:
  int id;
  int age;
  int weight;        
  public:
  void getdata()
 {
       cout<<"enter the student id"<<endl;
       cin>>id;
        cout<<"enter the student age"<<endl;
       cin>>age;
       cout<<"enter the student weight"<<endl;
       cin>>weight;
 }
  void showdata()
 {
       cout<<" student id:"<<id <<endl;
       
       cout<<" student age:"<<age <<endl;
       
       cout<<" student weight:"<<weight <<endl;
    
 }
};
int main()
{
student s;
s.getdata();
s.showdata();
getch();
}
    
