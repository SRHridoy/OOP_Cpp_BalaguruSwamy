/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
String Reverse...
*/

#include<iostream>
#include<cstring>
#define MAXSIZE 100

using namespace std;

int main()
{
    char str[MAXSIZE] = "TESO";
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        char temp;
        temp = str[i];
        str[i] = str[len - i -1];
        str[len - i - 1] = temp;
    }
    cout << str << endl;
}