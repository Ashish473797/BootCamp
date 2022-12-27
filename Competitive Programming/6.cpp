#include<bits/stdc++.h>
using namespace std;
int lenSubLong(string s)
{
    int size = s.length();
    if(size==0)
    return 0;
    int i = 0, j, k, count, max = 1;
    for(j=i+1; j<size; j++)
    {
        count = 1;
        for(k=j-1; k>=i; k--)
        {
            if(s[j]!=s[k])
            {
                count++;
            }
            else
            {
                i++;
                j=i+1;
                break;
            }
        }
        if(count>max)
        {
            max = count;
        }
    }
    return max;
}
int main()
{
    string s;
    cout<<"Enter a String: ";
    cin>>s;
    cout<<lenSubLong(s);
    return 0;
}