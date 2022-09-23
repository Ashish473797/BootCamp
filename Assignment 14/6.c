//Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],size=10,n=9,temp=0;
    printf("Enter 10 number: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
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
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}