#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Two numbers : ";
    cin >> a >> b;

    int x = a - b;

    try
    {
        if (x!=0)
        {
            cout <<"The division is : " << a / x << endl;
        }
        else 
        {
            throw(x);
        }
        
    }
    catch(int x)
    {
        cout << "Exception Occured!" << endl;
    }
    
}