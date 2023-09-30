/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Virtual Destructor : 
*/
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }

    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }

    virtual void someFunction() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }

    ~Derived() override {
        cout << "Derived destructor called" << endl;
    }

    void someFunction() override {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base* basePtr = new Derived;         
    
    basePtr->someFunction(); // Calls the Derived class function

    delete basePtr; // Calls the Derived destructor first, then the Base destructor

    return 0;
}
