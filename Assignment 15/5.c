//Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int firstOccur(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    }
}
int main()
{
    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d number: ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",firstOccur(a,size));
    return 0;
}