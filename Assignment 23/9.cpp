//Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two Number: ";
    cin>>a>>b;
    if(a>b)
    cout<<a<<" is greater.";
    else
    cout<<b<<" is greater.";
    return 0;
}