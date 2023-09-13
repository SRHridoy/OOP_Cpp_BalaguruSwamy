/*
9.1 Create a base class called shape. Use this class to store two
double type values that could be used to compute the area of
figures. Derive two specific classes called triangle and
rectangle from the base shape. Add to the base class, a
member function get_data( ) to initialize base class data
members and another member function display_area( ) to
compute and display the area of figures. Make display_area( )
as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept
dimensions of a triangle or a rect angle interactively, and
display the area.
Remember the two values given as input will be treated as
lengths of two sides in the case of rectangles, and as base
and height in the case of triangles, and used as follows:
Area of rectangle = x * y
Area of triangle = 1/2 * x * y
*/

#include<iostream>
using namespace std;

class Shape
{
    protected:
        double x,y;
    public:
        void get_data()
        {
            double a, b;
            cout << "Enter the value of a : " << endl;
            cin >>a;
            cout << "Enter the value of b : " << endl;
            cin >> b;
            x = a;
            y = b;
        }

        virtual void display_area() = 0;
};

class Triangle:public Shape
{
    public:
        Triangle(){}
        void display_area()
        {
            double area;
            area = .5*x*y;
            cout << "The Area of the Triangle is " << area << endl;
        }
};

class Rectangle:public Shape
{
    public:
        Rectangle(){}
        void display_area()
        {   double area;
            area = x*y;
            cout << "The Area of the Rectangle is " << area << endl;
        }
};

int main()
{
    Rectangle r;
    r.get_data();
    r.display_area();

    Triangle t;
    t.get_data();
    t.display_area();

}