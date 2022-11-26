// Write a C++ Program of Templated class derived from Non-templated class.
#include<bits/stdc++.h>
using namespace std;
class A
{
    protected:
        int a,b;
    public:
        A(){}
        A(int a,int b) : a(a), b(b) {}
        void showData()
        {
            cout<<"a = "<<a<<" and b = "<<b<<endl;
        }
};
template<class T>
class B : public A
{
    protected:
        T c,d;
    public:
        B(T x, T y) : c(x), d(y) {}
        void showData()
        {
            cout<<"c = "<<c<<" and d = "<<d<<endl;
        }    
};
int main()
{
    A a1(1,2);
    B <int>b1(3,4);
    a1.showData();
    b1.showData();
    return 0;
}