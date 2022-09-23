//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void firstN_odd(int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",(2*i)+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    firstN_odd(n);
    return 0;
}