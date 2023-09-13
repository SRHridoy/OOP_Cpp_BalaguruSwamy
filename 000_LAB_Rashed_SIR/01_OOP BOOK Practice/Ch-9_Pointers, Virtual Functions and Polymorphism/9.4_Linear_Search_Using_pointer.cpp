/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
//Program 9.4-Linear Search Using Pointer...
*/

#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int *ptr = arr;
    int value;
    cin >> value;
    for (int i = 0; i < n; i++)
    {
        if(value==*ptr)
        {
            cout << "Found!" << endl;
            return 0;
        }
        ptr++;
    }
    cout << "NOT FOUND" << endl;
}