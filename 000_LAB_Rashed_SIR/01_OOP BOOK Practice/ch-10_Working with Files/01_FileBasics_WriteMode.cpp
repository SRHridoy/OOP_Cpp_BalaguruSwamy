#include<iostream>
#include<fstream>
using namespace std;



int main()
{
    fstream myFile;
    //open(nameOfFile,mode);
    myFile.open("FileBasics.txt",ios::out);//write mode
    if (myFile.is_open())
    {
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    }
    //Again open and append mode : 
    myFile.open("FileBasics.txt",ios::app);//append mode
    if (myFile.is_open())
    {
        myFile << "This is third line from append mode ! \n";
        myFile.close();
    }
    system("pause>0");

}