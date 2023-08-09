#include<iostream>
using namespace std;

int main()
{
    float num1, num2, sum, avg;

    cout << "Enter the first number : ";
    cin >> num1;

    cout << "Enter the second number : ";
    cin >> num2;

    sum = num1 + num2;
    avg = sum / 2;

    cout << "The average is : " << avg << endl;
}