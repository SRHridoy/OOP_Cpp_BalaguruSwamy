/*
Write a C++ Program to demonstrate user of friend function by declaring a function float Sum(F,C); where F is a class to represent temperature in Fahrenheit and C is a class to represent temperature in centigrade. The function Sum return sum of two temperatures in Fahrenheit. Make the necessary required assumptions...
*/

#include<iostream>
using namespace std;

class Fahrenheit;
class Centigrade;
class Centigrade
{
    private:
        float cg;
    public:
        float getCentigrade(){return cg;}
        Centigrade(float c = 0.0):cg(c){}
        friend void tempSum(Centigrade, Fahrenheit);
};

class Fahrenheit
{
    private:
        float ft;
    public:
        float getFahrenheit(){return ft;}
        Fahrenheit(float f = 0.0):ft(f){}
        friend void tempSum(Centigrade, Fahrenheit);
};

void tempSum(Centigrade c, Fahrenheit f)
{
    float sum = f.getFahrenheit() + ((c.getCentigrade()*9)/5)+32;
    cout << "Temperature is : " << sum << " F" << endl;
}

int main()
{
    Centigrade c = 98;
    //Centigrade c(98);

    Fahrenheit f(102);

    tempSum(c,f);
}