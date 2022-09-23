#include<stdio.h>
void firstN_even(int n)
{
    if(n>0)
    {
        printf("%d ",n*2);
        firstN_even(n-1);
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