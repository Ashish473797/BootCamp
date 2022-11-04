/*Write a C++ program to accept a password and throw an exception if the password has 
less than 6 characters or does not contain a digit or does not contain any special 
character or does not contain any capital letter*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{ 
    char str[50];
    int special=0,numeric=0,capital=0,len=0;
    cout<<"Enter password: ";
    gets(str);
    len = strlen(str);
    for(int i=0; str[i]; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        capital++;
        if(isdigit(str[i]))
        numeric++;
        if((str[i]<65 || str[i]>90) && (str[i]<97 || str[i]>122) && (str[i]<'0' || str[i]>'9'))
        special++;
    }
    cout<<capital<<" "<<numeric<<" "<<special<<endl;
    try
    {
        if(len>=6 && special>0 && capital>0 && numeric>0)
        cout<<"thank you!"<<endl;
        else
        throw "invalid password!";
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    
    return 0;
}