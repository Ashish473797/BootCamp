//Write a recursive function to print first N odd natural numbers in reverse order.
#include<stdio.h>
void firstN_odd(int n)
{
    if(n>0)
    {
        printf("%d ",n*2-1);
        firstN_odd(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    firstN_odd(n);
    return 0;
}