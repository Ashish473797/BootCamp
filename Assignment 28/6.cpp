// Create a complex class and overload assignment operator for that class.
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
    void showData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator = (Complex c)
    {
        real=c.real;
        img=c.img;
    }
};
int main()
{
    Complex c1(1,2),c2(3,4),c3(0,0);
    c3=c1;
    c2.showData();
    c3.showData();
    return 0;
}