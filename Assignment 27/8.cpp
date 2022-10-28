//Consider a class Matrix
// Overload the - (Unary) should negate the numbers stored in the object.
#include<iostream>
using namespace std;
class Matrix
{
    int a[3][3];
    public:
    void setData()
    {
        cout<<"Enter Matrix"<<endl;
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
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    Matrix operator - ()
    {
        Matrix temp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                temp.a[i][j]= -(a[i][j]);
            }
        } 
        return temp;   
    } 
};
int main()
{
    Matrix m1,m2;
    m1.setData();
    m1.showData();
    (-m1).showData();
    
    return 0;
}