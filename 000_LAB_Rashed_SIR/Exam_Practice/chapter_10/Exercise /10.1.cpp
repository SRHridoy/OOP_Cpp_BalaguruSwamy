#include<iostream>
using namespace std;


void length()
{
    int count = 0;
    char c;
    cout << "\nEnter the Strings : ";
    cin.get(c);
    while (c!='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }
    
    cout << "\nThe length of the string is : " << count << endl; 
}


int main()
{
    length();
    return 0;
}