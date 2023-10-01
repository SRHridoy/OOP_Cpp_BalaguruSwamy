/*
Write a C++ Program to find the factorial of a given number. Define Factorial class and read_Number() and display_Factorail() methods in Factorial class. Use appropriate access specifiers in your program. Also make provision for executions handling in your program.
*/
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

class Factorial
{
private:
    long long num;

public:
    Factorial(int n = 0) : num(n) {}
    void read_Number(int n) { num = n; }
    void display_Factorial()
    {

        if (num < 0)
        {
            cerr << "Factorial is not defined for negative numbers!";
        }
        long long res = 1;
        for (int i = 2; i <= num ; i++)
        {
            res *= i;
        }
        cout << num <<"! = " << res << endl;
    }
};

int main()
{
    try
    {
        ifstream inputFile("factorial_input.txt");
        if (!inputFile.is_open())
        {
            throw runtime_error("Error Reading From Files!");
        }
        long long num1, num2, num3;
        inputFile >> num1 >> num2 >> num3;
        Factorial f1(num1);
        f1.display_Factorial();
        Factorial f2(num2);
        f2.display_Factorial();
        Factorial f3(num3);
        f3.display_Factorial();

        inputFile.close();
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }
}