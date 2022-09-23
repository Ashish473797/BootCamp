//Write a function to sort an array of any size. (TSRN)
#include<stdio.h>
void sort(int a[],int size)
{
    int n=size-1,temp=0;
    while(n)
    {
    for(int i=0;i<size;i++)
    {
        if(a[i]>a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }
    n--;
    size--;
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
    sort(a,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}