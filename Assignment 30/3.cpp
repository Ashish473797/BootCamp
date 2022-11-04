/*Write a C++ program to perform arithmetic operations on two numbers and throw an 
exception if the dividend is zero or does not contain an operator.*/
#include<iostream>
using namespace std;
int main()
{
    float a,b,result;
    char c;
    cout<<endl<<"-------- This program for arithmetic operation on two number by + , * , - , / --------"<<endl<<endl;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    try
    {
    cout<<"which operation do you want to do: ";
    cin>>c;
    if( c!='+' && c!='-' && c!='*' && c!='/')
    throw c;
    switch (c)
    {
    case '+':
        cout<<"sum is "<<a+b<<endl;
        break;
    case '*':
        cout<<"product is "<<a*b<<endl;
        break;
    case '-':
        cout<<"different is "<<a-b<<endl;
        break;
    case '/':
        if(b==0)
        throw "zero is not allowed for second number.";
        else
        cout<<"division is "<<a/b<<endl;
        break;            
    
    default:
        cout<<"something wrong try again!"<<endl;
        break;
    }
    }
    catch(char c)
    {
        cout<<c<<" is not valid operator."<<endl;
    }
    catch(const char *str)
    {
        cout<<str<<endl;
    }
    return 0;
}