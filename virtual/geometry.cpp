#include<iostream.h>
#include<conio.h>
class geometry
{
 private:
 int x,y;
 public:
 geometry()
  {
  x=0;
  y=0;
  }
  
 geometry(int a ,int b)
   {
    x=a;
    y=b;
   }
  int getx()                 
  {
      return x;
  }
  int gety()                 
  {
      return y;
  }
  void setx(int e)
  {
     x=e;
  } 
     void sety(int f)
  {
     y=f;
  }  
};
  
  int main()
  {
      int c,d;
      cout<<"enter the corrdinate of a point: x=" ;
      cin>>c;
      cout<<endl;
       cout<<"enter the corrdinate of a point: y=" ;
      cin>>d;  
      geometry g(c,d);
      cout<<"x="<<g.getx()<<"y="<<g.gety()<<endl;
       cout<<"enter the corrdinate of a point: x=" ;
      cin>>c;
      cout<<endl;
       cout<<"enter the corrdinate of a point: y=" ;
      cin>>d;
      geometry go;
      go.setx(c);
      go.sety(d);
      cout<<"x="<<go.getx()<<"y="<<go.gety()<<endl;
      getch();
  }
      
