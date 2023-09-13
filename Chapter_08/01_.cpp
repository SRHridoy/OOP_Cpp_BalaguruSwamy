#include<iostream>
using namespace std;

class base
{
    public:
        void show()
        {
            cout << "Base" << endl;
        }
};

class derived:public base
{   
    public:
        void show()
        {
            cout << "Derived" << endl;
        }
};

int main()
{
    base *b;
    derived d;
    b = &d;
    b->show();

}