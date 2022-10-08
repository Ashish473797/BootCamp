/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    return b;
}
int max(float x,float y)
{
    if(x>y)
    return x;
    return y;
}
int main()
{
    cout<<"greater number from integer number is "<<max(5,10);
    cout<<endl<<"greater number from real number is "<<max(5.5,2.9);
    return 0;
}