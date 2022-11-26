// Write a C++ Program to Add two numbers using function template.
#include<bits/stdc++.h>
using namespace std;
template<typename t1 = float , typename t2 = float , typename t3 = float>
t3 sum(t1 a,t2 b)
{
    return a+b;
}
int main()
{
    cout<<sum<int, int, int>(5.5,5.0)<<endl;
    cout<<sum<int, float, float>(5.5,5.5)<<endl;
    cout<<sum(5.4,3.4)<<endl;
    return 0;
}