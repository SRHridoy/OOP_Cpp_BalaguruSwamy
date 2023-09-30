#include<iostream>
#include<fstream>
using namespace std;

/*
The useful classes for working with files in C++ are:
1.fstreambase 
2.ifstream -----> derived from fstreambase
3.ofstream -----> derived from fstreambase

In order to work with files in C++, you will have to open it.Primarily, there are 2 ways to open a file:
1.Using the constructor
2.Using the member function open() of the class...

*/

int main(){
    
    string str1 = "This is Nova...";
    //Opening file using Constructor and writing on it :
    ofstream out("nivu.txt");//Write Operations
    out << str1;

    string str2;
    //Opening file using Constructor and reading from it :
    ifstream in("hidu.txt");//read Operations
    //in >> str2;
    getline(in,str2);
    cout << str2 << endl;

    return 0;
}