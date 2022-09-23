//Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void reverse(int *p,int size)
{
    for(int i = size-1; i>=0; i--)
    {
        printf("%d ",p[i]);
    }
}
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elments: ",n);
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);
    reverse(arr,n);
    return 0;
}