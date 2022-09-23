//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,max=0;
    printf("Enter number of data to find largest number: ");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nmemory allocation failed");
        return 0;
    }
    printf("Enter %d elements: ",n);
    for(int i = 0; i < n; i++)
    {
    scanf("%d",&ptr[i]);
    if(ptr[i]>max)
    max=ptr[i];
    }
    printf("largest number is %d",max);
    return 0;
}