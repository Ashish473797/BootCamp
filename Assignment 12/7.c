//Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void firstN_square(int n)
{
    if(n>0)
    {
        firstN_square(n-1);
        printf("%d ",n*n);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    firstN_square(n);
    return 0;
}