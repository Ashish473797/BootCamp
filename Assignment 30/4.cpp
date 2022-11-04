// Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
#include<iostream>
using namespace std;
int main()
{
    int flag = 0;
    char email[50];
    cout<<"Enter e-mail id : ";
    cin.ignore();
    cin.getline(email,50);
    try
    {
        for(int i=0; email[i]; i++)
        {
            if(email[i]=='@')
            flag++;
        }
        if(flag!=1)
        throw "not valid email id it should one @ symbol.";
        else
        cout<<"thank you!";
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}