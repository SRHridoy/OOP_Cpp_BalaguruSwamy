#include<iostream>
using namespace std;

class TIME_SUM
{
    int h, m;
    public:
        void getData(void);
        void timeSum(TIME_SUM,TIME_SUM);
        void putData(void);
};

void TIME_SUM::getData(void)
{
    cout << "Enter hour : ";
    cin >> h;
    cout << "Enter minute : ";
    cin >> m;
}
//First TIME_SUM for timeSum function return type;
void TIME_SUM::timeSum(TIME_SUM t1, TIME_SUM t2)
{
    m = t1.m + t2.m;
    h = m/60;
    m = m%60;
    h+=t1.h + t2.h;
}

void TIME_SUM::putData(void)
{
    cout << h << " hours and " << m << " minutes " << endl;
}

int main()
{
    TIME_SUM t1, t2, t_sum;

    t1.getData();
    t2.getData();
    t_sum.timeSum(t1,t2);

cout <<endl << endl << "_____________________TIME SUM __________________________" << endl << endl;
    t1.putData();
    t2.putData();
    t_sum.putData();

}