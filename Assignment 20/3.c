//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int *,int);
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elments: ",n);
    for(int i=0; i<n; i++)
    scanf("%d",&arr[i]);

    sort(arr,n);
    
    for(int i=0; i<n; i++)
    printf("%d ",arr[i]);
    return 0;
}
void sort(int *ptr,int size)
{
    int n=size-1;
    while(n)
    {
        for(int i=0; i<size; i++)
        {
            int temp;
            if(*(ptr+i)>*(ptr+(i+1)))
            {
               temp = ptr[i];
               ptr[i] = ptr[i+1];
               ptr[i+1] = temp;
            }

        }
        size--;
        n--;
    }
}