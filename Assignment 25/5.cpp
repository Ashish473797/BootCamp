// Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
#include<iostream>
using namespace std;
class LargestNumber
{
    int rev;
    int a;
    public:
    void setData(int x)
    {
        a=x;
    }
    int getData()
    {
        return a;
    }
    void reverse()
    {
        int u,sum=0;
        while(a>0)
        {
            u=a%10;
            sum = sum*10+u;
            a=a/10;
        }
        rev=sum;
    }
    int getrev()
    {
        return rev;
    }
};
int main()
{
    LargestNumber l1,l2;
    l1.setData(123);
    l1.reverse();
    cout<<l1.getrev()<<endl;
    l2.setData(46078);
    l2.reverse();
    cout<<l2.getrev()<<endl;
    return 0;
}