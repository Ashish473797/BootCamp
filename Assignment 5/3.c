//Write a program to print the first 10 natural numbers in reverse order
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    printf("%d ",i);
    return 0;
}