/*Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables*/
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    void setData(int real,int img)
    {
        Complex::real=real;
        Complex::img=img;
    }
    void showData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(5,4);
    c1.showData();
}