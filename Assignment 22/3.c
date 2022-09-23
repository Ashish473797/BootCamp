//Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    printf("Enter number of data to evaluate average: ");
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