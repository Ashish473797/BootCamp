//Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highest(int n)
{
    int u,high=0;
    while(n>0)
    {
        u=n%10;
        if(high<u)
        {
            high=u;
        }
        n=n/10;
    }
    return high;
}
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<"Highest Value is "<<highest(n);
    return 0;
}