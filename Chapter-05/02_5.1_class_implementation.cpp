#include <iostream>
using namespace std;
/*_____________________Creating Class____________________*/
class item
{
int number;
float cost;
public:
/*_____________________Declearing member function to define outside____________________*/
    void getData(int a, float b);
/*_____________________Member function defined inside Clas____________________*/
    void putData(void)
    {
        cout << "Number: " << number << endl;
        cout << "Cost: " << cost << endl;
    }
};

/*_____________________Outside member function defination____________________*/
void item :: getData(int a, float b)
{
    number = a;
    cost = b;
}

int main()
{
    item x,y;//Creating Object/var where data type is item.

    cout << "X item :" << endl;
    x.getData(12,34.24);
    x.putData();

    cout << "Y item :" << endl;
    y.getData(2,22.33);
    y.putData();
}