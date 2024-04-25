#include<iostream>
using namespace std;
class Base
{
      public:
      void Show()
      {
            cout<<"In Base Class"<<endl;
      }
};
class Derived: public Base
{
    public:
      void Show()
      {
            cout<<"In Derived Class";
      }  
};
int main()
{
      Base b;
      Derived d;
      b.Show();
      d.Show();
      
}