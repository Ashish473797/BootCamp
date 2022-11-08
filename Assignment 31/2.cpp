/*Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in derived class.*/
#include<iostream>
using namespace std;
class Input
{
    int a,b;
    public:
    void setData()
    {
        cout<<"Enter Two Numbers: ";
        cin>>a>>b;
    }
    int getSum()
    {
        return a+b;
    }
    
};
class Add : public Input
{
    public:
    void displaySum(Input i)
    {
        cout<<i.getSum()<<endl;
    }
};
int main()
{
    Input i1;
    i1.setData();
    Add a;
    a.displaySum(i1);
    return 0;
}