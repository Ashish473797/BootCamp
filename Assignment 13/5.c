//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sumN(int n)
{
    if(n==0)
    return 0;
    return sumN(n/10)+n%10;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",sumN(n));
    return 0;
}