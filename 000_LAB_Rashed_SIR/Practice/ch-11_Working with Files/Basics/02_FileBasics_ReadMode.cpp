#include<iostream>
#include<string>
#include<fstream>
using namespace std;



int main()
{
    fstream myFile;
    myFile.open("ReadMode.txt", ios::in);//read
    if(myFile.is_open())
    {
        string line;
        while (getline(myFile,line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
    return 0;
}