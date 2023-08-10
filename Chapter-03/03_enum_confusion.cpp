#include<iostream>
using namespace std;

int main()
{
    enum colour{red, blue, green, black};
    cout << red << endl;
    //Type case kora lagbe...Directly int not allowed.
    colour white =(colour) 45;
    cout << white << endl;
    
    colour bg = green;
    cout << bg << endl; 
    
    colour text = white;
    cout << text << endl;

    int cb = black;
    cout << cb << endl;

    //jai thakuk samne take follow kore 1 increase korbe jodi kono value na dia thake...
    enum day {Sunday,Friday = 7,Saturday,Monday = 6, Tuesday };
    cout << Sunday <<"\t" << Friday << "\t" << Saturday << "\t" << Monday << "\t" << Tuesday << endl;

    //Anonymous Enums : 
    enum{off,on};

    while(!off)
    {
        cout << "You will Shine" << endl;
        break;
    }

    while (on)
    {
        cout << "Best of Luck for your exam!" << endl;
        break;
    }

    

    
}