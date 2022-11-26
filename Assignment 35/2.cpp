//Write a C++ Program to find Largest among two numbers using function template.
#include<bits/stdc++.h>
using namespace std;
template<typename t1 = float, typename t2 = float, typename t3 = float>
t3 max(t1 a,t2 b)
{
    if(a>b)
    return a;
    return b;
}
int main()
{
    cout<<"Largest number is "<<max<int, int, int>(5,7);
    return 0;
}