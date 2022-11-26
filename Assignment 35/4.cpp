// Write a C++ Program to Swap data using function template.
#include<bits/stdc++.h>
using namespace std;
template<typename t1 = float,typename t2 = float>
void swap(t1 &a, t2 &b)
{
    t1 temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a,b;
    cout<<"Enter value for 'a' : ";
    cin>>a;
    cout<<"Enter value for 'b' : ";
    cin>>b;
    swap<int, int>(a,b);
    cout<<"value of 'a' is "<<a<<endl;
    cout<<"value of 'b' is "<<b<<endl;
    return 0;
}