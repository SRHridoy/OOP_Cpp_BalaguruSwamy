/*

    Write a program to get the student details and print the same using pointers to objects and pointers to members of a class. Create a class student. And use appropriate functions and data members...

*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    Student() : name(""), age(0), gpa(0.0) {}

    void inputDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Student Age: ";
        cin >> age;
        cout << "Enter Student GPA: ";
        cin >> gpa;
    }

    void printDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << " years" << endl;
        cout << "Student GPA: " << gpa << endl;
    }

    string* getNamePointer() {
        return &name;
    }

    int* getAgePointer() {
        return &age;
    }

    float* getGpaPointer() {
        return &gpa;
    }
};

int main() {
    Student student;

    // Use pointers to objects to input and print student details
    Student* studentPtr = &student;
    studentPtr->inputDetails();
    cout << "\nStudent Details (Using Pointers to Objects):\n";
    studentPtr->printDetails();

    // Use pointers to members to access and modify student details
    string* namePtr = student.getNamePointer();
    int* agePtr = student.getAgePointer();
    float* gpaPtr = student.getGpaPointer();

    // Modify student details using pointers to members
    *namePtr = "John";
    *agePtr = 20;
    *gpaPtr = 3.5;

    cout << "\nModified Student Details (Using Pointers to Members):\n";
    student.printDetails();

    return 0;
}
