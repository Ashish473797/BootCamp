//Write a recursive function to calculate sum of first N odd numbers
#include<stdio.h>
int sumN(int n)
{
    if(n==1)
    return 1;
    return sumN(n-1)+n*2-1;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",sumN(n));
    return 0;
}