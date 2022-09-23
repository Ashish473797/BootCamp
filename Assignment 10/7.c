//Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
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
int Combination(int n,int r)
{
    return fac(n)/(fac(n-r)*fac(r));
}
int main()
{
    int combination,n,r;
    printf("enter the value for n and r: ");
    scanf("%d%d",&n,&r);
    combination=Combination(n,r);
    printf("combination is %d",combination);
    return 0;
}