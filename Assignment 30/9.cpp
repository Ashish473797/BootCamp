// Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.
#include<iostream>
#include<cstring>
using namespace std;
int checkMail(char *str)
{
    int flag = 0;
    int len = strlen(str);
    char gmail[11] = "@gmail.com";
    int j=9;
    for(int i=len-1;i>=len-10;i--)
    {
        if(str[i]==gmail[j--])
        flag++;
    }
    if(flag==10)
    return 1;
    return 0;
}
int main()
{
    char str[32];
    cout<<"Enter your gmail-id: ";
    gets(str);
    try
    {
    if(!checkMail(str))
    {
        throw "invalid gmail-id!";
    }
    else
    {
        cout<<"thank you!"<<endl;
    }
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}