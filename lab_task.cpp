#include <iostream>
using namespace std;

// Base class Animal
class Animal 
{
public :
    string name;
    int age;

public:
    // Constructor
    Animal( string name, int age) : name(name), age(age) {}

    // Pure virtual function for making sounds
    virtual void makeSound()  = 0;

    // Pure virtual function for displaying information
    virtual void displayInfo()  = 0;

    
    
};

// Derived class Dog
class Dog : public Animal
 {
public:
    // Constructor
    Dog(const string name, int age) : Animal(name, age) {}

    // Override makeSound function
    void makeSound()
     {
        cout << "Woof! Woof!" << endl;
    }

    // Override displayInfo function
    void displayInfo()
    {
        cout << "Animal Type: Dog" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
    }
};

// Derived class Cat
class Cat : public Animal 
{
public:
    // Constructor
    Cat(const string name, int age) : Animal(name, age) {}

    // Override makeSound function
    void makeSound()
    {
        cout << "Meow! Meow!" << endl;
    }

    // Override displayInfo function
    void displayInfo() 
     {
        cout << "Animal Type: Cat" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    // Constructor
    Bird( string name, int age) : Animal(name, age) {}

    // Override makeSound function
    void makeSound()
     {
        cout << "Chirp! Chirp!" << endl;
    }

    // Override displayInfo function
    void displayInfo() 
     {
        cout << "Animal Type: Bird" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
    }
};

int main() 
{

        Dog d1("Buddy", 3);
         Cat c1("Whis1kers", 2);
        Bird b1("Tweety", 1);
        Animal *a1 , *a2 , *a3;
        a1 = &d1;
        a2 = & c1;
        a3 = &b1;
cout <<"animal sounds"<<endl;
   a1->makeSound();
   a2->makeSound();
   a3->makeSound();
   cout <<"----------------"<<endl;
   cout <<"information"<<endl;
   a1->displayInfo();
   a1->displayInfo();
   a3->displayInfo();

    
    return 0;
}
