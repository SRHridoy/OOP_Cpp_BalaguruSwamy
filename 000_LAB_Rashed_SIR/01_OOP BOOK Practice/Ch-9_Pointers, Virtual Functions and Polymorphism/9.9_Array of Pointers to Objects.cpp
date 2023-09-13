/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Array of Pointers to Objects...
*/

#include<iostream>
#include<cstring>
using namespace std;

class Algorithm
{
    protected:
        char *name;
        char *complexity;
        int len;
    public:
        Algorithm(){len = 0; name = new char[len+1];}

        void getName()
        {
            char *n;
            n = new char[30];
            cout << "\nEnter the Sorting Algoritm name : ";
            cin.ignore();
            cin.getline(n,30);
            len = strlen(n);
            name = new char[len+1];
            strcpy(name,n);

            char *c;
            c = new char[15];
            cout << "\nEnter the Complexity of " << n << " Algorithm : ";
            cin.getline(c,15);
            len = strlen(c);
            complexity = new char[len+1];
            strcpy(complexity,c);
        }

        void printDetails()
        {
            cout << "\nThe name of the Sorting Algoritm is : " << name << " and its Complexity is : " << complexity << endl << endl; 
        }

        ~Algorithm()
        {
            delete[] name;
            delete[] complexity;
        }

};

int main()
{
    Algorithm *arrPtr[10];
    int option;
    
    int n = 0;

    do
    {
        arrPtr[n] = new Algorithm;
        arrPtr[n]->getName();
        n++;

        cout << "\nDo you want to Enter one more Algoritm name ?\n";
        cout << "(Enter 1 for YES and 0 for NO) : ";
        cin >> option;
    } while (option && n < 10);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        arrPtr[i]->printDetails();
        delete arrPtr[i];
    }
    
}