//Write a C++ program to demonstrate try, throw and catch statements
#include<iostream>
using namespace std;
int main()
{
    cout<<"***remember negative value not allow for a and zero is not allow for b***";
    float result;
    float a,b;
    cout<<"Enter value of 'a' for a/b: ";
    cin>>a;
    cout<<"Enter value of 'b' for a/b: ";
    cin>>b;
    try
    {
        if(a<0)
        {
            throw (int)a;
        }
        else if(b==0)
        {
            throw "0 is not allowed for b!";
        }
        else
        {
            result = a/b;
        }
    }
    catch(int i)
    {
        cout<<i<<" is not allowed"<<endl;
        exit(0);
    }
    catch(const char *str)
    {
        cout<<str<<endl;
        exit(0);
    }
    catch(...)
    {
        cout<<"some problem try again!"<<endl;
        exit(0);
    }
    cout<<result;
    return 0;
}