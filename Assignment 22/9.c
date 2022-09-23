/*Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter how many bytes to allocate: ");
    scanf("%d",&n);
    void *ptr;
    ptr = malloc(n);
    if(ptr==NULL)
    {
        printf("memory allocation failed!");
        return 0;
    }
    else
    {
        printf("allocation Successful");
    }
    return 0;
}