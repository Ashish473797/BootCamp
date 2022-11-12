/*Define a class A having multiple constructors. Define another class B derived from class A. 
Create derived class constructors and show use of constructor in this single inheritance.*/
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