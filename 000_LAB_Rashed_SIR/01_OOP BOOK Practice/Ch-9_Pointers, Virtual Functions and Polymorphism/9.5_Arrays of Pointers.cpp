/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Arrays of pointers...
*/

#include <iostream>
#include <cstring> // Include the cstring header for strcmp function
using namespace std;

int main()
{
    // Declare an array of pointers to char (C-style strings)
    const char *ptr[4] = {
        "books",
        "television",
        "computer",
        "sports"};

    char str[25];
    cout << "Enter your favorite leisure pursuit: ";
    cin >> str;

    bool found = false; // Use a flag to track if the pursuit is found

    // Loop through the array and compare the input string with each item
    for (int i = 0; i < 4; i++)
    {
        if (!strcmp(str, ptr[i])) // Use strcmp to compare C-style strings
        {
            cout << "Your favorite pursuit: " << ptr[i] << " is available here" << endl;
            found = true;
            break; // Exit the loop once a match is found
        }
    }

    if (!found)
    {
        cout << "This is not available here" << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
