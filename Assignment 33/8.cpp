/*Create a base class called proof. Use this class to store two int type values that could be used to prove that 
triangle is a right angled triangle. Create a class compute which will determine whether a triangle is a right angled triangle.
Using these classes, design a program that will accept dimensions of a triangle, and display the result.*/
#include<iostream>
using namespace std;
class Proof
{
    protected:
        int a,b;
    public:
        Proof() {}
        void setData(int a,int b)
        {
            this->a = a;
            this->b = b;
        }
};
class Compute
{
    int a,b,c;
    public:
    void setData(int a,int b,int c)
    {
        Compute::a = a;
        Compute::b = b;
        Compute::c = c;
    }
    void showResult()
    {
        if(a*a + b*b == c*c)
        cout<<"right angled triangle"<<endl;
        else
        cout<<"not right angled triangle"<<endl;
    }
};
int main()
{
    Compute c1;
    c1.setData(3,4,5);
    c1.showResult();
    return 0;
}