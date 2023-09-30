/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Pointers to derived objects...
*/
#include<iostream>
using namespace std;

class Base
{
    public:
        int c;
        void show()
        {
            cout <<"\nI am from base class : " << c << endl;
        }
};

class Derived:public Base
{

    public:
        int f;
        void show()
        {
            cout << "\nI am from derived class  : " << f << endl;
        }
};

int main()
{
    Base *bPtr;
    Base b;
    bPtr = &b;

    bPtr->c = 100;
    cout << "bPtr points to the base Object :\n ";
    bPtr->show();


    Derived d;
    bPtr = &d;
    bPtr->c = 400;
    //bPtr->f = 300; error...
    cout << "bPtre is now points to derived object : \n";
    bPtr->show();

    Derived *dPtr;
    dPtr = &d;
    dPtr->f = 102;
    cout << "dPtr is derived type pointer\n";
    dPtr->show();

    cout << "Using ((Derived *)bptr)\n";
    //Derived er ekta pointer declare kore base er pointer ta typecast kore nilei kaj korbe...
    ((Derived*)bPtr)->f = 300;
    ((Derived*)bPtr)->show();
}