/*Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;
class Complex
{
    int real;
    int img;
    public:
    void setData(int r,int i)
    {
        real=r;
        img=i;
    }
    void printData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(5,3);
    c1.printData();
    return 0;
}