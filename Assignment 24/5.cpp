//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int isFibo(int n)
{
    int a=0,b=1,temp=0,nextfibo=0;
    while(1)
    {
       nextfibo=a+b;
       if(nextfibo==n)
       return 1;
       if(nextfibo>n)
       return 0;
       a=b;
       b=nextfibo;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isFibo(n))
    {
        cout<<"yes term of fibonacci series";
    }
    else
    cout<<"not term of fibonacci series";
    return 0;
}