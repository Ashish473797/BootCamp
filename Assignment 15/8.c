//Write a function in C to print all unique elements in an array.
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
void uniq(int a[],int size)
{
    sort(a,size);
    printf("%d ",a[0]);
    int i=0,j;
        for(j=1;j<size;j++)
        {
            if(a[i]==a[j])
            continue;
            else
            {
            printf("%d ",a[j]);    
            i=j;    
            }
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
    uniq(a,size);
    return 0;
}