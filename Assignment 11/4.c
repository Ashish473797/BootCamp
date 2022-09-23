//Write a function to find the next prime number of a given number. (TSRS)
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
int nextPrime(int n)
{
    int a=n+1;
    while(a)
    {
        if(checkPrime(a))
        {
            return a;
            a=0;
        }
        a++;
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("next prime number is %d",nextPrime(n));
    return 0;
}