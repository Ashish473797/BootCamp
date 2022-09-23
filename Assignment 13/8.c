// Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int febo(int n)
{
    if(n == 0 || n == 1)
    return n;
    return febo(n-1)+febo(n-2);
    
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("%d ",febo(i));
    return 0;
}