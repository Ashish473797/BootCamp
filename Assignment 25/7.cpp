// Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include<iostream>
using namespace std;
class Greatest
{
    int max;
    int a;
    int b;
    int c;
    public:
    void setData(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
    void Largest()
    {
        if(a>b)
        max=a;
        else if(b>c)
        max=b;
        else
        max=c;
    }
    int getLargest()
    {
        return max;
    }
};
int main()
{
    Greatest l1,l2;
    l1.setData(5,7,12);
    l1.Largest();
    cout<<l1.getLargest()<<endl;
    return 0;
}