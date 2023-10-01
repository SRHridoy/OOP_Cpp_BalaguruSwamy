/*Write and run the following C++ program:

(a)Create a Student class with basics data members, member functions and constructor.
(b)Derive UG-Student and PG-student classes from student class with additional details of their specialized courses. Define appropriate constructor and methods in derived classes also.
(c)Define proper destructor with appropriate message about its execution for all three classes.

You are free to make necessary assumptions required.
*/

#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    string name;
    int age;

public:
    // Constructor for Student
    Student(const string& n, int a) : name(n), age(a) {}

    // Member function to display student information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor for Student
    ~Student() {
        cout << "Student Destructor Called." << endl;
    }
};

class UGStudent : public Student {
private:
    string ugCourse;

public:
    // Constructor for UGStudent
    UGStudent(const string& n, int a, const string& course) : Student(n, a), ugCourse(course) {}

    // Member function to display UG student information
    void displayUG() {
        display();
        cout << "UG Course: " << ugCourse << endl;
    }

    // Destructor for UGStudent
    ~UGStudent() {
        cout << "UG Student Destructor Called." << endl;
    }
};

class PGStudent : public Student {
private:
    string pgCourse;

public:
    // Constructor for PGStudent
    PGStudent(const string& n, int a, const string& course) : Student(n, a), pgCourse(course) {}

    // Member function to display PG student information
    void displayPG() {
        display();
        cout << "PG Course: " << pgCourse << endl;
    }

    // Destructor for PGStudent
    ~PGStudent() {
        cout << "PG Student Destructor Called." << endl;
    }
};

int main() {
    // Create a UGStudent object
    UGStudent ug("John Doe", 20, "Computer Science");
    cout << "UG Student Details:" << endl;
    ug.displayUG();

    // Create a PGStudent object
    PGStudent pg("Jane Smith", 25, "Data Science");
    cout << "PG Student Details:" << endl;
    pg.displayPG();

    return 0;
}
