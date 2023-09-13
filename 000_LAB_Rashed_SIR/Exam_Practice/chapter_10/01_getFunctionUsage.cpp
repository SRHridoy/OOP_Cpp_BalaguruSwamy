#include<iostream>
using namespace std;

void getFunctionTest()
{
    char c;
    cin.get(c);
    //Terminates when gate newline or enter : 
    while (c!='\n')
    {
        cout << c;
        cin.get(c);
    }
    
}

int main()
{
    getFunctionTest();
}