//Write a function to print first N prime numbers (TSRN)
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
void nPrime(int n)
{
    int a=1,b=1;
    while(b!=11)
    {
        if(checkPrime(a))
        {
        printf("%d ",a);
        b++;
        }
        a++;
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    nPrime(n);
    return 0;
}