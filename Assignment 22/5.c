//Write a program to read a one dimensional array, print sum of all elements along with inputted array elements using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("Enter number of data: ");
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
    }
    printf("sum is %d",sum);
    return 0;
}