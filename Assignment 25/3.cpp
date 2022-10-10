// Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include<iostream>
using namespace std;
class Factorail
{
    int f=1;
    int n;
    public:
    void setData(int a)
    {
        n=a;
    }
    int getData()
    {
        return n;
    }
    void fact()
    {
        for(int i=1;i<=n;i++)
        {
            f *= i;
        }
    }
    int getfact()
    {
        return f;
    }
};
int main()
{
    Factorail f1,f2;
    f1.setData(0);
    f1.fact();
    cout<<f1.getfact()<<endl;
    f2.setData(5);
    f2.fact();
    cout<<f2.getfact()<<endl;
    return 0;
}