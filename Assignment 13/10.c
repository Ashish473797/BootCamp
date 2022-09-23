// Write a program in C to calculate the power of any number using recursion
#include<stdio.h>
int power(int n,int p)
{
    if(p==0)
    return 1;
    return (power(n,p-1))*n;
}
int main()
{
    int n,p;
    printf("Enter base value for n and power as p: ");
    scanf("%d%d",&n,&p);
    printf("%d",power(n,p));
    return 0;
}