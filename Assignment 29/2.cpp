//Write a C++ program to convert Complex type to Primitive type.
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public: 
    void setData(int r,int i)
    {
        real=r;
        img=i;
    }
    void showData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    operator int()
    {
        return real;
    }
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=(int)c1;
    c1.showData();
    cout<<x+1<<endl;
    return 0;
}