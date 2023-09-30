/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Pointer and String : Substring searching
*/
#include <iostream>
#include <cstring> // Include the cstring header for strlen function

using namespace std;

int main()
{
    char str[] = "\nC++ is better than C";
    int len = strlen(str);

    cout << "The main string is: " << str << endl;

    // Dynamically allocate memory for the substring
    char *substr = new char[len + 1]; // +1 for the null terminator

    cout << "\nEnter the substring to be searched: ";
    cin.getline(substr, len); // Read the substring including spaces

    int len2 = strlen(substr);
    bool found = false;

    for (int i = 0; i <= len - len2; i++)
    {
        int j;
        for (j = 0; j < len2; j++)
        {
            if (str[i + j] != substr[j])
            {
                break;
            }
        }
        if (j == len2)
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "\nThe substring is present in the main string" << endl;
    }
    else
    {
        cout << "\nThe substring is not present in the main string" << endl;
    }

    // Deallocate the memory for the substring
    delete[] substr;

    return 0;
}
