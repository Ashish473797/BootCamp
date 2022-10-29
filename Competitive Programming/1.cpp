#include<iostream>
using namespace std;
int is_pallindrome(int val)
{
    int temp=val;
    int sum=0,unit=0,count=0;
    if(val<0)
    return 0;
    while(temp>0)
    {
        unit = temp%10;
        sum = sum*10 + unit;
        temp = temp/10;
    }
    if(sum==val)
    return 1;
    return 0;
    
}
int main()
{
    int n;
    cout<<"Enter a Integer Value: ";
    cin>>n;
    if(is_pallindrome(n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}