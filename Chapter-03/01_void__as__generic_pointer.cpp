#include<iostream>
using namespace std;

int main()
{
    int target = 10;
    void *gp;
    gp = &target;
    cout << "gp----" << gp << "\t" << "&target-----" << &target << "\t" << endl;


    int targetForP = 34;
    int *p;
    p = &targetForP;
    cout << "p----" << p << "\t" << "&targetForP-----" << &targetForP << "\t" << "*p-----" << *p << endl;

    gp = p;
    cout << "gp----" << gp << "\t" << "&target-----" << &targetForP << "\t" << endl;


    char *c;
    char ch = 'H';
    gp = &ch;

    c = (char*)gp;
    cout << "gp----" << gp << "\t" << "&ch----" << &ch << "\t" << "c----" << c << "\t" << "*c-----"  << *c << "\t" << "ch -----" << ch << "\t" << endl;

}