#include<iostream>
using namespace std;

void divide(int x, int y, int z)
{
    cout << "\n We are inside the function \n";
    if(x-y!=0)
    {
        int r = z/(x-y);
        cout << "Result = " << r << endl;
    }
    else
    {
        throw(x-y);
    }
}

int main()
{
    try
    {
        cout << "We are insid the try block\n";
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<< "Caught the exception\n";
    }
    
    return 0;
}