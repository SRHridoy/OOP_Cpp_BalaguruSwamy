//Question No: 3(b) Prove that class can be used as a built-in datatype in terms of plus(+) operator among objects...

#include<iostream>
using namespace std;

class COMPLEX
{
    float real;
    float imag;

    public:
        void getData();
        COMPLEX operator +(COMPLEX c);
        void putData();
};

void COMPLEX::getData()
{
    cout <<endl << "Enter First Complex Number : " << endl;
    cout << "Enter the Real part, r = ";
    cin >> real;
    cout << "Enter the Imaginary part, i = ";
    cin >> imag;
}

COMPLEX COMPLEX::operator+(COMPLEX c)
{
    COMPLEX sum;
/*_____________________This na dileo hobe ....Explicitly bujanor jonne use kora hoi____________________*/
    sum.real = this->real + c.real;
    sum.imag = this->imag + c.imag;

    return sum;
}

void COMPLEX :: putData()
{
    cout << "The Real Part, r = : " << real << endl;
    cout << "The Imaginary Part, i = : " << imag << endl;
}

int main()
{
    COMPLEX c1, c2, c3;
    c1.getData();
    c2.getData();
//Etai seta je + use kore prove...je built in data type hoilo class
    c3 = c1 + c2;

    c1.putData();
    c2.putData();
    c3.putData();

}