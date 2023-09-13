//Write a program to sort an array of integer using function pointer in descending order and resort this same array in ascending order using virtual function...

#include <iostream>
using namespace std;

int compareDesc(int a, int b) {
    return a < b;
}

int compareAsc(int a, int b) {
    return a > b;
}

// using function pointer
void sort(int arr[], int n, int (*compare)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (compare(arr[j], arr[j + 1])) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


class Base {
public:
    virtual void sort(int arr[], int n) = 0; // pure virtual function
};

// A derived class that overrides the virtual function to sort an array in ascending order
class Derived : public Base {
public:
    void sort(int arr[], int n) {
        ::sort(arr, n, compareAsc); // call the global sort function with compareAsc function pointer
    }
};

int main() {
    int arr[] = {5, 3, 7, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    //using function pointer
    sort(arr, n, compareDesc);

    // Print the sorted array
    cout << "Array sorted in descending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Derived d;

    // Resort the array in ascending order using virtual function
    d.sort(arr, n);

    // Print 
    cout << "Array resorted in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}