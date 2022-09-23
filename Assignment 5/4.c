//Write a program to print the first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    printf("%d ",i*2-1);
    return 0;
}