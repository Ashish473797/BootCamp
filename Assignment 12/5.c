//Write a recursive function to print first N even natural numbers
#include<stdio.h>
void firstN_even(int n)
{
    if(n>0)
    {
        firstN_even(n-1);
        printf("%d ",n*2);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    firstN_even(n);
    return 0;
}