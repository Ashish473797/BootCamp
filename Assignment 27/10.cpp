// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading).
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void setData()
    {
        cout<<"Enter 3*3 matrix: "<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void showData()
    {
        cout<<"matrix is :- "<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Matrix operator + (Matrix m)
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    Matrix m1,m2,m3;
    m1.setData();
    m2.setData();
    m3 = m1 + m2;
    m3.showData();
    return 0;
}