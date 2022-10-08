// Define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"Value of a is "<<a<<endl<<"Value of b is "<<b<<endl;
    return 0;
}