// Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.
#include<iostream>
using namespace std;
int main()
{
    int n,count = 0;
    cout<<"Enter 6 digit area PIN code: ";
    cin>>n;
    try
    {
        while(n)
        {
            n=n/10;
            count++;
        }
        if(count != 6)
        throw "not valid pin code!";
        else
        cout<<"thank you!"<<endl;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}