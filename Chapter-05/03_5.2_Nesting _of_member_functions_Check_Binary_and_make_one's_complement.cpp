#include<iostream>
using namespace std;

class binary
{
string s;
bool helper = true;
void check_binary(void);
public:
    void read(void);
    void make_ones_complement(void);
};
/*_____________________Function for Taking Input____________________*/
void binary::read(void)
{
    cout << "Enter a Binary Number : ";
    cin >> s;
/*_____________________Nesting two methods/functions____________________*/
    while (helper)
    {
        check_binary();
        if(!helper)
            break;
    }
}

/*_____________________Function for Checking Binary And Exception Handling____________________*/
void binary::check_binary(void)
{
/*_____________________Dhore nilam je vul nai tao check korsi____________________*/
    helper = false;

    for (int i = 0; i < s.length(); i++)
    {
        //if(s.at(i)!='0' and s.at(i)!='1')
/*_____________________Same oporer ta ar nicher ta____________________*/
        if(s[i]!='0' && s[i]!='1')
        {
            cout << "Sorry, please Enter a correct Binary Number(only 0 or only 1) : ";
            cin >> s;
            helper = true;
            break;
        }
    }
    if(!helper)
        cout << "Your Binary Number is : " << s <<endl;
}

/*_____________________Fuction for making one's complement____________________*/
void binary:: make_ones_complement()
{
    string temp = s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='0')
            s[i]='1';
        else
            s[i]='0';
    }
    cout << "One's Complement of "<<temp<< " is : "<< s << endl;
}


int main()
{
    binary bin1,bin2;
    bin1.read();
    bin1.make_ones_complement();
}