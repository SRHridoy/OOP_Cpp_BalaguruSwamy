#include <iostream>
using namespace std;

class Time
{
private:
    int day, month, year;

public:
    // Constructor for initializing the date
    Time(int d = 1, int m = 1, int y = 2001) : day(d), month(m), year(y) {}

    // Display current time
    void displayTime()
    {
        cout << "Current Date: " << day << " / " << month << " / " << year << endl;
    }

    // Function to check if it's a leap year
    bool isLeapYear()
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // Function to find the number of days in the month
    int numberOfDaysInMonth()
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (isLeapYear())
            {
                return 29;
            }
            else
            {
                return 28;
            }
        default:
            return -1; // Invalid month
        }
    }
};

int main()
{
    int day, month, year;

    cout << "Enter day, month, and year: ";
    cin >> day >> month >> year;

    Time currentTime(day, month, year);

    currentTime.displayTime();

    if (currentTime.isLeapYear())
    {
        cout << year << " is a leap year!" << endl;
    }
    else
    {
        cout << year << " is not a leap year!" << endl;
    }

    int daysInMonth = currentTime.numberOfDaysInMonth();
    if (daysInMonth == -1)
    {
        cout << "Invalid month!" << endl;
    }
    else
    {
        cout << "Number of days in the month: " << daysInMonth << endl;
    }

    return 0;
}
