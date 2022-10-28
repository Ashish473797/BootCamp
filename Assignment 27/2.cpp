// Write a C++ program to overload unary operators that is increment and decrement.
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
    Complex operator ++ (int)
    {
        
        Complex temp(0,0);
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
    Complex operator ++ ()
    {
        
        Complex temp(0,0);
        temp.real=++real;
        temp.img=++img;
        return temp;

    }
    Complex operator -- (int)
    {
        
        Complex temp(0,0);
        temp.real=real--;
        temp.img=img--;
        return temp;

    }
    Complex operator -- ()
    {
        
        Complex temp(0,0);
        temp.real=--real;
        temp.img=--img;
        return temp;

    }
    friend ostream & operator << (ostream &,Complex);
};
ostream & operator << (ostream &output,Complex c)
{
    output<<c.real<<" + "<<c.img<<"i"<<endl;
} 
int main()
{
    Complex c1(3,5);
    cout<<(c1++)<<(c1++);
    return 0;
} 