//Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function
#include<stdio.h>
int fac(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int sum_of_series(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
      sum = sum + (fac(i)/i);
    }
    return sum;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("sum of series is %d",sum_of_series(n));
    return 0;
}