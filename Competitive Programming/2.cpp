#include<iostream>
using namespace std;
int * product_execpSelf(int arr[],int size)
{
    int *ret=(int*)malloc(size*sizeof(int));
    ret[0]=1;
    for(int i=1;i<size;i++){
        ret[i]=arr[i-1]*ret[i-1];
    }
    int temp=1;
    for(int i=size-1;i>=0;i--)
    {
        ret[i]*=temp;
        temp*=arr[i];
    }
    return ret;
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