//Write a C++ program to create Account class and derive Saving-Account class from Account class. Saving-Account class should have one constructor which calls constructor of Account class.Both Account and Saving-Account classes should have their own methods to display account details.
#include <iostream>
#include <string>

using namespace std;

class Account {
protected:
    string accountNumber;
    double balance;

public:
    // Constructor for Account class
    Account(const string& accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Method to display account details
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
};

class SavingsAccount : public Account {
public:
    // Constructor for SavingsAccount class, which calls the base class constructor
    SavingsAccount(const string& accNum, double initialBalance) : Account(accNum, initialBalance) {}

    // Method to display savings account details
    void displaySavingsAccountDetails() {
        cout << "Savings Account Number: " << accountNumber << endl;
        cout << "Savings Balance: $" << balance << endl;
    }
};

int main() {
    // Create an Account object
    Account acc("12345", 1000.0);

    // Create a SavingsAccount object
    SavingsAccount savingsAcc("54321", 500.0);

    // Display details of both accounts
    cout << "Account Details:" << endl;
    acc.displayAccountDetails();

    cout << "\nSavings Account Details:" << endl;
    savingsAcc.displaySavingsAccountDetails();

    return 0;
}
