//Write a function to calculate the factorial of a number. (TSRS)
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
int main()
{
    int n,factorial;
    scanf("%d",&n);
    factorial=fac(n);
    printf("factorial is %d",factorial);
    return 0;
}