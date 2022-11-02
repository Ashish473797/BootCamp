//Write a C++ program to convert Primitive type to Complex type.
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex(){}
    Complex(int x)
    {
        real=x;
        img=x;
    }
    void showData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
 Complex c1;
 int x=5;
 c1=(Complex)x;
 c1.showData();
 return 0;
}