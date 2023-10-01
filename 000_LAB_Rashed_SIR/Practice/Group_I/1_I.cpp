//Write a C++ program to create Student class.Define constructor and display() method to display student information.Derive Working_Student class from Student class.Also override display() method of Student class in Working_Student class.Make necessary assumptions required. Use appropriate data types for data members of both...
#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int age;

public:
    Student(const string& n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

class WorkingStudent : public Student {
private:
    string job;

public:
    WorkingStudent(const string& n, int a, const string& j) : Student(n, a), job(j) {}

    // Override the display method
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Job: " << job << endl;
    }
};

int main() {
    Student student("Alice", 20);
    WorkingStudent workingStudent("Bob", 25, "Software Engineer");

    cout << "Student Information:" << endl;
    student.display();

    cout << "\nWorking Student Information:" << endl;
    workingStudent.display();

    return 0;
}
