#include <iostream>
using namespace std;

class MATRIX
{
    int m[3][3];

public:
    void getData(void);
    void putData(void);
    friend MATRIX transposeMatrix(MATRIX);
};

void MATRIX ::getData(void)
{
    cout << endl <<  "Enter the matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "m[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> m[i][j];
        }
    }
}
void MATRIX ::putData(void)
{
    cout <<endl << "The matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "m[" << i + 1 << "][" << j + 1 << "] = ";
            cout << m[i][j] << endl;
        }
    }
}

MATRIX transposeMatrix(MATRIX mat)
{
    MATRIX mTrans;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mTrans.m[i][j] = mat.m[j][i];
        }
        
    }
    return mTrans;
}

int main()
{
    MATRIX mat01;
    mat01.getData();
    mat01.putData();

    cout << endl << "____________After Transpose ______________" << endl;
    MATRIX matTrans;
    matTrans = transposeMatrix(mat01);
    matTrans.putData();

}