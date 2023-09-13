#include<iostream>
using namespace std;

int main()
{
    char name[20];
    cout << "Enter your name : ";
    cin.getline(name, 20);

    cout << "Your name is : ";
    //This also print garbase values...
    //cout.write(name, 20);
    return 0;
}