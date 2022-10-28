//Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    friend Complex operator + (Complex,Complex);
    void showData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
Complex operator + (Complex X,Complex Y)
{
    Complex temp(0,0);
    temp.real=X.real+Y.real;
    temp.img=X.img+Y.img;
    return temp;
}
int main()
{
    Complex c1(2,3),c2(4,5),c3(0,0);
    c3 = c1 + c2;
    c3.showData();
    return 0;
}