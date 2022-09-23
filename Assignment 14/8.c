//Write a program to find the second smallest number in an array.Take array valuesfrom the user
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
    printf("%d ",a[1]);

    return 0;
}