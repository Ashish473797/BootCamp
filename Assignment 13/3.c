//Write a recursive function to calculate sum of first N even numbers
#include<stdio.h>
int sumN(int n)
{
    if(n==0)
    return 0;
    return sumN(n-1)+n*2;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",sumN(n));
    return 0;
}