//Find out the maximum and minimum from an array using dynamic memory allocation in C
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,max = 0,min;
    printf("Enter number of element: ");
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
    sum += ptr[i];
    if(max<ptr[i])
    max=ptr[i];
    }
    min = max;
    for(int i = 0; i < n; i++)
    {
        if(min>ptr[i])
        min=ptr[i];
    }
    printf("maximum is %d and minimum is %d",max,min);
    return 0;
}