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
      system("cls");
      Base *b;
      Derived d;
      b = &d;
      b->Show();

      return 0;
}