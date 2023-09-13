#include<iostream>
using namespace std;

//Doesn't work perfectly...
void cinTest()
{
    char c;
    cin >> c;
    //Terminates when gate newline or enter : 
    while (c!='\n')
    {
        cout << c;
        cin >> c;
    }
    
}

int main()
{
    cinTest();
}