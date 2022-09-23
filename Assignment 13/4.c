#include<stdio.h>
int sumN(int n)
{
    if(n==1)
    return 1;
    return sumN(n-1)+n*n;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",sumN(n));
    return 0;
}