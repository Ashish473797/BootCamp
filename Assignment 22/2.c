/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
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
    printf("Average is %d",sum/n);
    return 0;
}