/*
Derive classes savings - Account and FD - Account from Account Class. These classes should have details about interest rate, account balance and operations related to transactions on the account. The program should have appropriate constructors for all the classes. You are free to make assumptions required.
*/

#include <iostream>

using namespace std; // Add this line to use the std namespace

class Account {
protected:
    double balance;

public:
    // Constructor for initializing the account balance
    Account(double initialBalance) : balance(initialBalance) {}

    // Virtual function for depositing money
    virtual void deposit(double amount) {
        balance += amount;
    }

    // Virtual function for withdrawing money
    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    // Virtual function to display account details
    virtual void display() {
        cout << "Account Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    // Constructor for initializing the balance and interest rate
    SavingsAccount(double initialBalance, double rate) : Account(initialBalance), interestRate(rate) {}

    // Override the deposit method to add interest for savings account
    void deposit(double amount) override {
        balance += amount + (amount * interestRate / 100.0);
    }

    // Override the display method to show interest rate
    void display() override {
        cout << "Savings Account Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class FDAccount : public Account {
private:
    double interestRate;
    int term; // Term of the fixed deposit in months

public:
    // Constructor for initializing the balance, interest rate, and term
    FDAccount(double initialBalance, double rate, int depositTerm)
        : Account(initialBalance), interestRate(rate), term(depositTerm) {}

    // Override the deposit method to add interest for fixed deposit
    void deposit(double amount) override {
        if (term >= 12) {
            balance += amount + (amount * interestRate / 100.0);
        } else {
            cout << "Fixed Deposit term should be at least 12 months." << endl;
        }
    }

    // Override the display method to show interest rate and term
    void display() override {
        cout << "Fixed Deposit Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Term (months): " << term << endl;
    }
};

int main() {
    // Create a Savings Account
    SavingsAccount savings(1000, 5); // Initial balance of 1000, 5% interest rate
    savings.deposit(500);
    savings.display();

    // Create a Fixed Deposit Account
    FDAccount fd(2000, 7, 18); // Initial balance of 2000, 7% interest rate, 18-month term
    fd.deposit(1000);
    fd.display();

    return 0;
}
