//Write a C++ Program to define Number class.Define constructor for this class. Implement a method to check wheather the number is even of odd.ALso define a method to find the factorial of the number...

#include <iostream>

using namespace std;

class Number {
private:
    int num;

public:
    // Constructor to initialize the number
    Number(int n) : num(n) {}

    // Method to check if the number is even
    bool isEven() {
        return (num % 2 == 0);
    }

    // Method to check if the number is odd
    bool isOdd() {
        return (num % 2 != 0);
    }

    // Method to calculate factorial
    int factorial() {
        if (num < 0) {
            return -1; // Factorial is not defined for negative numbers
        }
        int result = 1;
        for (int i = 1; i <= num; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Number number(n);

    if (number.isEven()) {
        cout << n << " is even." << endl;
    } else if (number.isOdd()) {
        cout << n << " is odd." << endl;
    }

    if (n >= 0) {
        int fact = number.factorial();
        cout << "Factorial of " << n << " is " << fact << endl;
    } else {
        cout << "Factorial is not defined for negative numbers." << endl;
    }

    return 0;
}
