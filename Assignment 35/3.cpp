// Write a C++ program to find the largest of three elements using a template.
#include<bits/stdc++.h>
using namespace std;
template<typename t1 = float, typename t2 = float, typename t3 = float, typename t4 = float>
t3 max(t1 a,t2 b,t3 c)
{
    if(a>b)
    {
        if(a>c)
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    return c;
}
int main()
{
    cout<<max<int, int, int, int>(8,9,7);
    return 0;
}