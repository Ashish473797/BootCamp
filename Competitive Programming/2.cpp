#include<iostream>
using namespace std;
int * product_execpSelf(int arr[],int size)
{
    int *temp = (int *)malloc(size);
    for(int i=0; i<size; i++)
        temp[i]=1;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i!=j)
            temp[i] = temp[i]*arr[j];
        }
    }
    return temp;
}
int main()
{
    int n;
    int *ptr;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter value of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    ptr = product_execpSelf(arr,n);
    
    for(int i=0; i<n; i++)
        cout<<ptr[i]<<" ";
    return 0;
}