/*
Write and execute a C++ program which create a shape class and derive circle and square class from shape class. Define appropriate constructors for all the three classes. Define Find-Area method in shape class and override this method in circle and square classes to find their area...
*/
#include<iostream>
using namespace std;

class Shape
{
    protected:
        float len;
    public:
        virtual void find_area() = 0;
        Shape(float l = 0):len(l){}
};

class Circle:public Shape
{
    public:
        Circle(float r = 0):Shape(r){}
        void find_area()
        {
            cout << "The area of the Circle is : " <<3.1416*len*len << endl;
        }

};

class Square:public Shape
{
    public:
        Square(float l = 0):Shape(l){}
        void find_area()
        {
            cout << "The area of the Square is : " << len*len << endl;
        }
};

int main()
{
    Circle c(2);
    c.find_area();
    Square s(3);
    s.find_area();
}