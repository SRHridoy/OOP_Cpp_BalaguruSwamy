/*

    Write a Program illustrating how the constructors are implemented and the order in which they are called when the classes are inherited. Use three classes named alpha, beta, gamma such that alpha, beta are base class and gamma is derived class inheriting alpha & beta...

*/
#include <iostream>
using namespace std;

class alpha {
public:
    alpha() {
        cout << "Alpha constructor called." << endl;
    }
};

class beta {
public:
    beta() {
        cout << "Beta constructor called." << endl;
    }
};

class gamma : public alpha, public beta {
public:
    gamma() {
        cout << "Gamma constructor called." << endl;
    }
};

int main() {
    gamma obj;
    return 0;
}
