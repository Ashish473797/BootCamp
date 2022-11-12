// C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include<iostream>
using namespace std;
class A
{
        int a,b;
    public:
        A(){ cout<<"Default constructor called of class A"<<endl; }
        A(int a){ cout<<"Parameterize constructor called of class A"<<endl; }
};
class B : public A
{
    public:
    B(){ cout<<"Default constructor called of class B"<<endl; }
    B(int a,int b) : A(a) { cout<<"Parameterize constructor called of class B"<<endl; }
};
int main()
{
    B b1,b2(1,4);
    return 0;
}