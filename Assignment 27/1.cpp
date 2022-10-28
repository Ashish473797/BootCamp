/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class: +, -, *, == */
#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex operator+(Complex obj1)
    {
    Complex temp(0,0);
    temp.real = real + obj1.real;
    temp.img =  img  + obj1.img;
    return temp;
    }
    friend Complex operator - (Complex,Complex);
    friend Complex operator * (Complex,Complex);
    friend bool operator == (Complex,Complex);
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    void showData()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};
Complex operator - (Complex obj1,Complex obj2)
{
    Complex temp(0,0);
    temp.real = obj1.real-obj2.real;
    temp.img  = obj1.img-obj2.img;
    return temp;
}
Complex operator * (Complex obj1,Complex obj2)
{
    Complex temp(0,0);
    temp.real = obj1.real * obj2.real;
    temp.img  = obj1.img * obj2.img;
    return temp;
}
bool operator == (Complex obj1,Complex obj2)
{
    if(obj1.real==obj2.real && obj1.img==obj2.img)
    return true;
    return false;
}
int main()
{
    Complex c1(2,3),c2(5,7),c3(0,0),c4(0,0),c5(0,0);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c3.showData();
    c4.showData();
    c5.showData();
    if(c3==c4)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}