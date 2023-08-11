#include<iostream>
using namespace std;

class EMPLOYEE
{
    string name;
    int emp_id;
    public:
        void getData(void);
        void putData(void);
};

void EMPLOYEE::getData(void)
{
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Employee Id : ";
    cin >> emp_id;
}

void EMPLOYEE :: putData()
{
    cout << "Name = " << name << endl;
    cout << "ID = " << emp_id <<endl;
}

int main()
{
    EMPLOYEE programmer[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Give details of  Programmer "<< i+1 << " : " << endl;
        programmer[i].getData();
    }
    cout << endl;
    cout << "___________________________PRGRAMMERS DETAILS____________________"<< endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Programmer  "<< i+1 << " : " << endl;
        programmer[i].putData();
    }
}