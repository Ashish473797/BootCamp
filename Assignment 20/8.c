//Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sum(int *,int);
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elments: ",n);
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);

    printf("sum is %d",sum(arr,n));
}
int sum(int *ptr,int size)
{
        int total = 0;
        for(int i=0; i<size; i++)
        {
            total+=ptr[i];
        }
        return total;
}