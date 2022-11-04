// Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.
#include<iostream>
using namespace std;
int main()
{
    long int n;
    int count=0;
    cout<<"Enter your mobile number without country code: ";
    cin>>n;
    try
    {
        while(n)
        {
            n=n/10;
            count++;
        }
        if(count!=10)
        throw "invalid number!";
        else
        cout<<"thank you!"<<endl;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}