#include<iostream>
using namespace std;
class Animal
{
      public:
      string name;
      int age;
      public:
      // Animal(string Name , int Age)
      // {
      //       name = Name;
      //       age = Age;
      // }
      virtual void display()  =0;
     
      virtual void making_sounds() =0;
      
};
class Dog : public Animal
{
      public:
       Dog(string Name , int Age)
      {
            name = Name;
            age = Age;
      }
      void making_sounds()
      {
            cout<<"Woof Woof"<<endl;
      }
      void display()
      {
            cout<<"Name : "<< name <<endl;
            cout<<"Age : "<< age <<endl;
            cout<<"Type : "<<"Dog "<<endl;
      }

};
class Cat : public Animal
{
      public:
       Cat(string Name , int Age)
      {
            name = Name;
            age = Age;
      }
      void making_sounds()
      {
            cout<<"Meow Meow"<<endl;
      }
      void display()
      {
            cout<<"Name : "<< name <<endl;
            cout<<"Age : "<< age <<endl;
            cout<<"Type : "<<"Cat "<<endl;
      }

};
class Bird : public Animal
{
      public:
       Bird(string Name , int Age)
      {
            name = Name;
            age = Age;
      }
      void making_sounds()
      {
            cout<<"Chirp Chirp"<<endl;
      }
      void display()
      {
            cout<<"Name : "<< name <<endl;
            cout<<"Age : "<< age <<endl;
            cout<<"Type : "<<"Bird "<<endl;
      }

};
int main()
{
      Dog d1("Buddy" , 3);
      Cat c1("Whiskers" , 5);
      Bird b1("Polly" , 2);
      Animal *a1 , *a2 , *a3;
     a1 = &d1;
     a2 = &c1;
     a3 = &b1;
      cout<<"Animal Sounds"<<endl;
      a1->making_sounds();
      a2->making_sounds();
      a3->making_sounds();
      cout<<"Animal Information"<<endl;
      a1->display();
      a2->display();
      a3->display();

      return 0;
}