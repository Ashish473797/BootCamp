/*Write a C++ program to accept a username if the username has less than 6 characters 
or does contain any digit or special symbol.*/
#include<iostream>
#include<ctype.h>
#include<cstring>
using namespace std;
int main()
{
    char str[32];
    int count = 0;
    cout<<"Enter username: ";
    gets(str);
    int len = strlen(str); 
    for(int i=0; str[i]; i++)
    {
        if(isalpha(str[i]))
        count++;
    }
    cout<<count<<endl;
    try
    {
       if(count==6 && len==6)
       cout<<"thank you!"<<endl;
       else
       throw "invalid username!";
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}