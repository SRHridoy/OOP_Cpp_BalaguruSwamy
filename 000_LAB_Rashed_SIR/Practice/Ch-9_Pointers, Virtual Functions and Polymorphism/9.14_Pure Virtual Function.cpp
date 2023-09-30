/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Pure Virtual Function : 
*/
#include <iostream>
using namespace std;

// Base class with a pure virtual function
class Balagurusamy {
public:
    virtual void example() = 0; // Pure virtual function
};

// Derived class 1
class C : public Balagurusamy {
public:
    void example() override {
        cout << "C text Book written by Balagurusamy" << endl;
    }
};

// Derived class 2
class OOPS : public Balagurusamy {
public:
//Override na likhleo kaj emnei hoi...Just for formal look :   
    void example() override {
        cout << "C++ text Book written by Balagurusamy" << endl;
    }
};

int main() {
    Balagurusamy *arra[2];
    C e1;
    OOPS e2;

    arra[0] = &e1;
    arra[1] = &e2;

    arra[0]->example();
    arra[1]->example();

    return 0;
}
