#include<iostream>
using namespace std;

struct student 
{
    private:
        int a = 99;
        int b = 99;
    public:
        int sum(){
            return a+b;
        }
};

int main()
{
    student Arnob;
    int sum = Arnob.sum();
    cout << sum << endl;
}