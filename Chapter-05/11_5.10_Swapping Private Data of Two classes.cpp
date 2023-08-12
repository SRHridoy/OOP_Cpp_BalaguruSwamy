#include<iostream>
using namespace std;

/*_____________________Forward declearation lagbe____________________*/
class INTERPOOL;

class RAW_AGENT
{
    private:
        int code = 505;
        friend void bivishon(RAW_AGENT &rawAgent,INTERPOOL &interPool);
    public:
        void showCode()
        {
            cout << "Raw Agent Code : " << code << endl;
        }
};

class INTERPOOL
{
    private:
        int code = 707;
        friend void bivishon(RAW_AGENT &rawAgent,INTERPOOL &interPool);
    public:
        void showCode()
        {
            cout << "Interpool Code : " << code << endl;
        }
};

void bivishon(RAW_AGENT &rawAgent,INTERPOOL &interPool)
{
    int virus;
    virus = rawAgent.code;
    rawAgent.code = interPool.code;
    interPool.code = virus;
}

int main()
{
    RAW_AGENT raw;
    INTERPOOL inter;

    raw.showCode();
    inter.showCode();

    cout << endl <<"________________After Biswashghatokota______________ "<< endl << endl;
    bivishon(raw,inter);

    raw.showCode();
    inter.showCode();
}