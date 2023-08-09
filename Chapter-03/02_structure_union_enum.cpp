#include<iostream>
using namespace std;

//Structure : 
typedef struct employee
{
    int eId;//4
    string name;//---
    float salary;//4
} emp;

//Union : 
union money
{
//One data at a time...
//Maximum data type er soman memory allocate hoi...
    int rice;//4
    char car;//1
    float pounds;//4
};

int main()
{

    //Structure : 
    emp Hridoy;
    Hridoy.eId = 01;
    Hridoy.name = "Md. Sohanur Rahman Hridoy";
    Hridoy.salary = 200000;

    cout << "Employee ID" <<"\t\t" <<"Employee Name" << "\t\t\t" <<"Salary" << endl;
    cout << Hridoy.eId << "\t\t\t" << Hridoy.name <<"\t" << Hridoy.salary << endl;

    //Union : 
    union money m1;
    m1.rice = 34;
    m1.car = 'c';
    cout << m1.rice << endl;//gives wrong ans because last update use car...
    cout << m1.car<< endl;

    //Enum :
    enum Meal{Breakfast, Lunch, Dinner};
    cout << Breakfast;
    cout << Lunch;
    cout << Dinner;


}