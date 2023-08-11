#include<iostream>
using namespace std;

class ITEM
{
    static int count;   
    int number;
    public:
        void getData(int a)
        {
            number = a;
            count++;
        }
        void getCount(void)
        {
            cout << "Count : " << count << endl;
        }
};
/*_____________________ Eta na dile Error asbe ____________________*/
int ITEM :: count;

int main()
{
    ITEM a, b, c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    a.getCount();
    b.getData(200);
    b.getCount();
    c.getData(300);
    c.getCount();

    cout << "After getting Data : " << endl;

    a.getCount();
    b.getCount();
    c.getCount();
}