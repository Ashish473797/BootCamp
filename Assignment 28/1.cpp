/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex()
    {
        real=0;
        img=0;
    }
    friend istream & operator >> (istream &,Complex &);
    friend ostream & operator << (ostream &,Complex &);
};
istream & operator >> (istream &input,Complex &c)
{
    cout<<"Enter real part: ";
    input>>c.real;
    cout<<"Enter img part: ";
    input>>c.img;
    return input;
}
ostream & operator << (ostream &output,Complex &c)
{
    cout<<c.real<<" + "<<c.img<<"i"<<endl;
}
int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}