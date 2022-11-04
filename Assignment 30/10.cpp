/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8 
characters or does contain a digit or special symbol or space*/
#include<iostream>
#include<cstring>
using namespace std;
int checkNick(char *str)
{
    int flag = 0;
    if(strlen(str)>8)
    return 0;
    for(int i=0; str[i]; i++)
    {
       if(isalpha(str[i]))
       flag++;
    }
    if(flag == strlen(str))
    return 1;
    else 
    return 0;
}
int main()
{
    char str[32];
    cout<<"Enter NickName: ";
    gets(str);
    try 
    {
        if(!checkNick(str))
        throw "invalid nickname!";
        else
        cout<<"thank you!"<<endl;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}