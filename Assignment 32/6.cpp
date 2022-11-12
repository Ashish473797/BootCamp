// C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice.
#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A() { cout<<"default of A"<<endl; }
    A(int a) { cout<<"parameterize of A"<<endl; } 

};
class B : public A
{
    int b;
    public:
    B() { cout<<"default of B"<<endl; }
    B(int a,int b) : A(a) { cout<<"parameterize of B"<<endl; }
};
class C : public B
{
    int c;
    public: 
    C() { cout<<"default of C"<<endl; }
    C(int a,int b,int c) : B(a,b) { cout<<"parameterize of C"<<endl; }
};
int main()
{
    C c1, c2(3,4,5);
    return 0;
}