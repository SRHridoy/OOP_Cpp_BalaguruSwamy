#include<iostream>
using namespace std;

class Students
{
    protected :
        string name;
        int student_id;
    public:
        Students(){};
        Students(string n, int i){
            name = n;
            student_id = i;
        }
        void displayStudent(){
            cout << "Name : " << name << endl;
            cout << "Student ID : " << student_id << endl;
        }
};

class Tests : public Students
{
    protected:
        int sub_code;
        int marks;
    public:
        Tests(){};
        Tests(string n, int i, int s_code, int mrk):Students(n,i){
            sub_code = s_code;
            marks = mrk;
        }

        void displayTest(){
            cout << "Subject Code : " << sub_code << endl;
            cout << "Marks : " << marks << endl;
        }
};

class Results:public Tests
{
    private:
        float cgpa;
    public:
        Results(){};
        Results(string n, int i, int s_code, int mrk, float cg) : Tests(n,i,s_code, mrk){
            cgpa = cg;
        }

        void displayResult()
        {
            cout << "CGPA : " << cgpa << endl;
        }
};


int main()
{
    Results s1;
    cout <<endl << "RESULT " << endl;

    s1 = Results("Arnob",2102003,201,100,4);

    s1.displayStudent();
    s1.displayTest();
    s1.displayResult();
    cout << endl << endl;
    Results s2("Hridoy", 2102002, 201,100,4);
    s2.displayStudent();
    s2.displayTest();
    s2.displayResult();

}