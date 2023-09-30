#include<iostream>
using namespace std;

void multiple_catch(int x)
{
    try
    {
        if(x==1)throw(1);
        else if(x==2)throw (2.0);
        else if (x==3) throw ('x');
        else throw(4);
    }
    catch(int x)
    {
        cout << "Integer caught!" << endl;
    }
    catch(double x)
    {
        cout << "Double Caught!" << endl;
    }
    catch(char x)
    {
        cout << "Character caught!" << endl;
    }
    catch(float x){
        cout << "Caught 4" << endl;
    }
    
}

int main()
{
    multiple_catch(1);
    multiple_catch(2);
    multiple_catch(3);
    multiple_catch(4);
}