// Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    int a=1,b=1,c=1;
    cout<<"sum of 3 number is  "<<add(a,b,c)<<endl;
    cout<<"sum of 2 number is "<<add(a,b)<<endl;
    return 0;
} 