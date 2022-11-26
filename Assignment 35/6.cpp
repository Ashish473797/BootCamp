// Write a C++ Program to find Sum of Array using function template.
#include<bits/stdc++.h>
using namespace std;
template<typename t1>
t1 arrSum(t1 arr[], int size)
{
    t1 sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"how many element do you want to enter in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements: ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"sum of element is "<<arrSum<int>(arr, n);
    return 0;
}