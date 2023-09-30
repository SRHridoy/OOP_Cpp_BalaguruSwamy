/*
Create a class Employee that contains an employee number, employee name and address. Write a Menu driven C++ program to get the 'n' number of employee details and display all details in employee name wise stored order...
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdexcept>
using namespace std;

class Employee
{
public:
    int empNumber;
    string empName;
    string empAddress;

    // Constructor to initialize employee details
    Employee(int number, const string &name, const string &address) : empNumber(number), empName(name), empAddress(address) {}
};

// Function to display employee details
void displayEmployee(const Employee &emp)
{
    cout << "Employee Number: " << emp.empNumber << endl;
    cout << "Employee Name: " << emp.empName << endl;
    cout << "Employee Address: " << emp.empAddress << endl;
    cout << "----------------------------------" << endl;
}

int main()
{
    vector<Employee> employees;
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    // Input employee details
    for (int i = 0; i < n; i++)
    {
        int number;
        string name, address;

        cout << "Enter Employee Number: ";
        cin >> number;
        cin.ignore(); // Clear the newline character from the previous input
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee Address: ";
        getline(cin, address);

        Employee emp(number, name, address);
        employees.push_back(emp);
    }

    // Sort employees by name
    sort(employees.begin(), employees.end(), [](const Employee &a, const Employee &b)
        { return a.empName < b.empName; });

    cout << "\nEmployee Details (Name-wise):\n";
    for (const Employee &emp : employees)
    {
        displayEmployee(emp);
    }

    return 0;
}