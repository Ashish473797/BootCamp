// Write a function in C to count the frequency of each element of an array
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
void frequency(int a[],int size)
{
    sort(a,size);
    int i=0,j=0,count;
    while(i<size)
    {
        count=0; 
        while(j<size)
        {
            if(a[i]==a[j])
            {
            count++;
            j++;
            }
            else
            break;
        }
        printf("\nfrequency of %d is %d",a[i],count);
        i=j;
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
    frequency(a,size);
    return 0;
}