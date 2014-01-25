#include<iostream.h>
#include<conio.h>
#include<string.h>
class school
{
      private:
      int i;        
      int number;
      char name[100];
      int rollno;
      int marks;
      int top[60];
      char topper[100];
      public :
      school()
      {
           cout<<"enter the number of students"<<endl;
           cin>>number;
           for(i=0;i<number;i++)
           {
            cout<<"enter the name of student"<<endl;
            cin>>name;
            cout<<"enter the roll number of student"<<endl;
            cin>>rollno;
            cout<<"enter the total marks of student"<<endl;
            cin>>marks;
            top[i]=marks;
            if (top[i]>top[i+1])
            {
              strcpy(topper,name);
            }
            }
            cout<<"name of the topper is "<<topper<<endl;
           
       }
       
            
};
int main()
{
    school s;
    getch();
}

           
