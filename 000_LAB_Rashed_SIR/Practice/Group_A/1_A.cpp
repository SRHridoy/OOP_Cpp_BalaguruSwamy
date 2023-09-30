/*
Write and run a C++ Program to create class Complex-Number.
(a)This class will create objects of complex numbers.
(b)Define appropriate constructor for this class.
(c)Define method to display complex number.
(d)Overload '+' operator for adding two complex numbers.
*/
#include <iostream>
#include<stdexcept>
#include <fstream>
using namespace std;

class Complex_Number
{

private:
    float real;
    float imag;

public:
    // Constructor :
    Complex_Number(float r = 0.0, float i = 0.0)
    {
        real = r;
        imag = i;
    }
    // Display Function :
    void display()
    {
        cout << real << " + i" << imag << endl;
    }
    // Operator Overloading :
    Complex_Number operator+(Complex_Number &c)
    {
        Complex_Number addition;
        addition.real = real + c.real;
        addition.imag = imag + c.imag;
        return addition;
    }
    //getters :
    float getReal(){
        return real;
    }
    float getImag(){
        return imag;
    }
};

int main()
{
//Exception handaling:
    try{
        //Using files for input/ read from files : 
        ifstream inputFile("complex_input.txt");
        if(!inputFile.is_open()){
            throw runtime_error("Failed to read from Input file!");
        }
        //Read two complex num from input file :
        float real1,imag1,real2, imag2;
        inputFile >> real1 >> imag1 >> real2 >> imag2;
        //Creating Objects :
        Complex_Number c1(real1,imag1);
        Complex_Number c2(real2,imag2);
        //Addition : 
        Complex_Number sum = c1 + c2;
        //close :
        inputFile.close();

        //Displaying : 
        cout << "Complex Number 1 : ";
        c1.display();
        cout << "Complex Number 2 : ";
        c2.display();
        cout << "Addion : ";
        sum.display();

        //Writing in file : 
        ofstream outputFile("complex_output.txt");
        if(!outputFile.is_open()){
            throw runtime_error("Failed to writing on files!");
        }
        //Write the output in files:
        outputFile << "Complex Number 1 : " << real1 << " + i"<< imag1 << endl;
        outputFile << "Complex Number 2 : " << real2 << " + i" << imag2 << endl;
        outputFile << "Addtion : " << sum.getReal() << " + i" << sum.getImag();
        //close outputFile:
        outputFile.close();
    }
    catch(const exception &e){
        cerr << "Error : " << e.what() << endl;
    }
}