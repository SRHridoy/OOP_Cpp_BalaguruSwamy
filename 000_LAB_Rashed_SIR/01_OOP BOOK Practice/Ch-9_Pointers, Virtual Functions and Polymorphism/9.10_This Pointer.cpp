/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
This Pointer...
*/
#include <iostream>
#include <cstring>
using namespace std;

class person
{
protected:
    char *name;
    int age;

public:
    person(const char *s, int a)
    {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
        age = a;
    }
    person BoroVai(person &x)
    {
        if (x.age > age)
            return x;
        else
            return *this;
    }

    void display()
    {
        cout << "Name : " << name << endl << "Age : " << age << endl;
    }
};

int main()
{
    person p1("Ozaer", 23), p2("Arnob", 24), p3("Mahi", 22);

    person bigBrother = p1.BoroVai(p2); // Assign the result to a variable
    cout << "Ozaer ar Arnob er moddhe boro vai holo : " << endl;
    bigBrother.display();

    bigBrother = p2.BoroVai(p3); // Assign the result to a variable
    cout << "Arnob ar Mahir moddhe boro vai holo : " << endl;
    bigBrother.display();

    p3.display(); // Display the original p3

    return 0;
}