//Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
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
int permutation(int n,int r)
{
    return fac(n)/fac(n-r);
}
int main()
{
    int per,n,r;
    printf("enter the value for n and r: ");
    scanf("%d%d",&n,&r);
    per=permutation(n,r);
    printf("Arrangnments are %d",per);
    return 0;
}