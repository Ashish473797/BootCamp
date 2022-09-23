//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int checkPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    if(i==n)
    return 1;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(checkPrime(n))
    printf("prime number");
    else
    printf("not prime");
    return 0;
}