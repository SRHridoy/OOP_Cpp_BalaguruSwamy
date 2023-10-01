/*
Write a C++ program to create a Teacher class. Derive Graduate_Teacher and School_Teacher classes from the Teacher class. Define constructors for all the classes. Define methods to display teacher name,subject and years of experience. Make necessary assumptions, if any...
*/

#include<iostream>
#include<stdexcept>
#include<fstream>
#include<string>
using namespace std;

class Teacher
{
    protected:
        string name;
        string subject;
        int experience;
    public:
        Teacher(string n = "", string sub = "", int exp = 0):name(n),subject(sub),experience(exp){}

        void display()
        {
            cout << "Name : " << name << endl;
            cout << "Subject : " << subject << endl;
            cout << "Experience : " << experience << endl;
        }
        
};

class Graduate_Teacher:public Teacher
{
    public:
        Graduate_Teacher(string n,string sub,int exp):Teacher(n,sub,exp){}
};

class School_Teacher:public Teacher
{
    public:
        School_Teacher(string n,string sub, int exp):Teacher(n,sub,exp){}
};

int main()
{
    try
    {
        ifstream inputFile("teachers_list.txt");
        if(!inputFile.is_open())
        {
            throw runtime_error("Error Readin from files!");
        }
        string nameG,subG;
        int expG;
        getline(inputFile,nameG);
        getline(inputFile,subG);
        inputFile >> expG;
        //Most Helpful:
        inputFile.ignore();

        cout << "Graduate Teacher : " << endl;
        Graduate_Teacher g(nameG,subG,expG);
        g.display();

        string nameS,subS;
        int expS;   
        getline(inputFile,nameS);
        getline(inputFile,subS);
        inputFile >> expS;

        cout << "School Teacher : " << endl;
        School_Teacher s(nameS, subS, expS);
        s.display();
        
        inputFile.close();

        ofstream outputFile("teachers_output.txt");
        if(!outputFile.is_open())
        {
            throw runtime_error("Failed Writing on File ...");
        }
        outputFile << "Graduate Teacher : " << endl << "------------------" << endl;
        outputFile << "Name : " << nameG << endl;
        outputFile << "Subject : " << subG << endl;
        outputFile << "Experience : " << expG << endl;
        outputFile << "School Teacher : " << endl << "------------------" << endl;
        outputFile << "Name : " << nameS << endl;
        outputFile << "Subject : " << subS << endl;
        outputFile << "Experience : " << expS << endl;
    }
    catch(const exception &e)
    {
        cerr << e.what() << endl;
    }
}