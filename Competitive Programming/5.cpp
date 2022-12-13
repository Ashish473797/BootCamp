#include<bits/stdc++.h>
using namespace std;
void two_sum(int arr[], int target, int size)
{
    int i, j;
    int flag = 0;
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            if(i==j)
            {
                continue;
            }
            else if((arr[i] + arr[j]) == target)
            {
            flag = 1;
            break;
            }
        }
        if(flag == 1)
        break;
    }
    cout<<i<<" "<<j<<endl;
}
int main()
{
    int n;
    cout<<"Enter size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Element"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Target Value: ";
    cin>>target;
    two_sum(arr, target, n);
    return 0;
}