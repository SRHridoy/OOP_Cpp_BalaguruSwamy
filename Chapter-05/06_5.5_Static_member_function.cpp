#include<iostream>
using namespace std;

class STATIC_MEMBER_FUNCTION
{
    int serial_number;
    static int count;

    public:
        void setSerialOfObjects();
        void showSerialOfObjects();
/*_____________________Static function baire define kora jai nah____________________*/
        static void totalObjects()
        {
            cout << "You created " << count << " Objects !" << endl;
        }
};

void STATIC_MEMBER_FUNCTION::setSerialOfObjects()
{
    serial_number = ++count;
}

void STATIC_MEMBER_FUNCTION::showSerialOfObjects()
{
    cout <<"Object no you set : " << serial_number << endl;
}
int STATIC_MEMBER_FUNCTION::count;

int main()
{
    STATIC_MEMBER_FUNCTION obj01, obj02, obj03, obj04, obj05;

    obj01.setSerialOfObjects();
    obj02.setSerialOfObjects();
    obj03.setSerialOfObjects();

/*_____________________Jekono object dia call korleo hobe____________________*/
    STATIC_MEMBER_FUNCTION::totalObjects();

    obj01.showSerialOfObjects();
    obj02.showSerialOfObjects();
    obj03.showSerialOfObjects();

    obj05.setSerialOfObjects();
    obj04.setSerialOfObjects();

    obj04.showSerialOfObjects();
    obj05.showSerialOfObjects();

    STATIC_MEMBER_FUNCTION::totalObjects();

}