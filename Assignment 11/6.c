//Write a function to print all Prime numbers between two given numbers. (TSRN)
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
int printAtoB(int a,int b)
{
    for(int i=a+1;i<b;i++)
    {
        if(checkPrime(i))
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int a,b;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    printAtoB(a,b);
    return 0;
}