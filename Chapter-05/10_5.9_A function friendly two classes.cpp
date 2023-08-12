#include<iostream>
using namespace std;
/*_____________________Agei DONER declearation korlam karon friend function er moddhe amare 2 ta class er obj argument hisebe pass kora lagbe____(Forward declearation bole etake)________________*/
class BACKEND_DEV;

class FRONTEND_DEV
{
    int salary;
    public:
        void setSalary();
        friend void maxSalary(BACKEND_DEV,FRONTEND_DEV);
};

void FRONTEND_DEV::setSalary()
{
    cout << "Enter the salary of a FrontEnd Devloper : ";
    cin >> salary;
}

class BACKEND_DEV
{
    int salary;
    public:
        void setSalary();
        friend void maxSalary(BACKEND_DEV,FRONTEND_DEV);
};

void BACKEND_DEV::setSalary()
{
    cout <<"Enter the salary of a BackEnd Devloper : ";
    cin >> salary;
}

/*_____________________Friend function____________________*/
void maxSalary(BACKEND_DEV backEnd,FRONTEND_DEV frontEnd)
{
    if(backEnd.salary>frontEnd.salary)
    {
        cout << "The BackEnd Devloper has "<<backEnd.salary-frontEnd.salary << " more salary than FrontEnd Devloper" << endl;
    }
    else
    {
        cout << "The FrontEnd Devloper has "<<frontEnd.salary-backEnd.salary <<" more salary than BackEnd Devloper" << endl;
    }
}

int main()
{
    FRONTEND_DEV fDev01, fDev02;
    BACKEND_DEV bDev01, bDev02;

    fDev01.setSalary();
    bDev01.setSalary();

// error karon friend function defination argument list dekh
    //maxSalary(fDev01,bDev01);

    maxSalary(bDev01,fDev01);



}