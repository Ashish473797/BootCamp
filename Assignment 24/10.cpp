// Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
int sum(int a,int b)
{
   return a+b;
}
float sum(float a,float b)
{
   return a+b;
}
float sum(int a,float b)
{
   return a+b;
}
float sum(float a,int b)
{
   return a+b;
}
int main()
{
    cout<<sum(5,5)<<endl;
    cout<<sum(5.9f,5.1f)<<endl;
    cout<<sum(5.5f,5)<<endl;
    cout<<sum(5,5.0f)<<endl;
    return 0;
}