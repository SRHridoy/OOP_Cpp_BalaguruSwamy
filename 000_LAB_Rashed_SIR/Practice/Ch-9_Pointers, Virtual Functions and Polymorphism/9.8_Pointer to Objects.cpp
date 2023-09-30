/*Autor: Md.Sohanur Rahman Hridoy
----------------------------------
Pointer to Objects...
*/

#include<iostream>
using namespace std;
#define SIZE 2
class item
{
    private:
        int code;
        float price;

    public:
        //item(){};
        item(int c = 0,float p = 0){code = c; price = p;}

        void getData(int a, float b){code = a; price = b;}

        void showData()
        {
            cout << "Code : " << code << endl;
            cout << "Price : " << price << endl;
        }
};

int main()
{
    item *ptr = new item[SIZE];
    //Safety nebar karokn amra jokhn ptr diye input nebar somoi ptr++ korsi tokhn ptr ar first obj ke point korse nah change hoye jasse tai 1st obj er address agei safety ke diye rakhsi pore kaje lagte pare tai..
    item *safety = ptr;

    for (int i = 0; i < SIZE; i++)
    {
        int x;float y;
        cout << "Enter the code and price for item " << i + 1 << endl;
        cin >> x >> y;
        ptr->getData(x,y);
        ptr++;
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Item : " << i+1 << endl;
        safety->showData();
        safety++;
    }
    
}