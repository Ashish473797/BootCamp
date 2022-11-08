/*Write a C++ program to demonstrate how a common friend function can be used to exchange the
private values of two classes. (Use call by reference method).*/
#include<iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    A(int a): x(a) {}
    void showData()
    {
        cout<<x<<endl;
    }
    friend void swap(A &,B &);

};
class B
{
    int y;
    public:
    B(int b): y(b) {}
    void showData()
    {
        cout<<y<<endl;
    }
    friend void swap(A &,B &);
};
void swap(A &a1, B &b1)
{
    int temp;
    temp = a1.x;
    a1.x = b1.y;
    b1.y = temp;
}
int main()
{
    A a1(1);
    B b1(2);
    swap(a1,b1);
    a1.showData();
    b1.showData();
    return 0;
}