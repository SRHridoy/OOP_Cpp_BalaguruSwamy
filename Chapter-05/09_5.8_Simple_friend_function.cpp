#include<iostream>
using namespace std;


class FRIEND_FUNC
{

    int a, b;
    public:
        void getData();
        friend void median(FRIEND_FUNC obj);
};

void FRIEND_FUNC :: getData()
{
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
}
/*_____________________This is a friend function ____________________*/
void median(FRIEND_FUNC obj)
{
    int med = (obj.a + obj.b) / 2;
    cout << "The Median of "<< obj.a << " and " << obj.b << " is " <<med << endl;
}

int main()
{
    FRIEND_FUNC obj1, obj2;

    obj1.getData();
    median(obj1);
}