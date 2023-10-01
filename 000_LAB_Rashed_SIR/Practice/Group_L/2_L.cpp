/*
Write a C++ program to find a a+b, a-b, a*b and a/b, where a and b are two numbers.Implement proper machanism to handle exception(s) in this program...
*/
#include <iostream>
#include <stdexcept> // for exception handling

using namespace std;

int main() {
    double a, b;

    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;

    try {
        // Addition
        double sum = a + b;
        cout << "a + b = " << sum << endl;

        // Subtraction
        double difference = a - b;
        cout << "a - b = " << difference << endl;

        // Multiplication
        double product = a * b;
        cout << "a * b = " << product << endl;

        // Division
        if (b == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }
        double quotient = a / b;
        cout << "a / b = " << quotient << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
