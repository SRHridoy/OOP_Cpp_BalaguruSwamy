/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Virtual Pointer...
*/
#include <iostream>
using namespace std;

class Base {
public:
    virtual void print() {
        cout << "This is the Base class." << endl;
    }
};

class Derived : public Base {
public:
//Override optional likha:
    void print()override {
        cout << "This is the Derived class." << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    Base* ptr;

    ptr = &baseObj;
    ptr->print(); // Calls the Base class version

    ptr = &derivedObj;
    ptr->print(); // Calls the Derived class version

    return 0;
}
