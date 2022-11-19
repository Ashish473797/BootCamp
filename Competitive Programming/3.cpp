#include<iostream>
using namespace std;
int peekIndex(int arr[], int size)
{
    int start = 0, end = size - 1, mid = end/2;
    while(start<end)
    {
    if(arr[mid] > arr[mid+1])
    {
        if(arr[mid] >= arr[mid-1])
        {
            return mid;
        }
        end = mid;
    }
    else
    {
        start = mid+1;
    }
    mid = (start+end)/2;
    }
}
int main()
{
    int size;
    cout<<"Enter size of an Array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter "<<size<<" Elements: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<peekIndex(arr,size);
    return 0;
}