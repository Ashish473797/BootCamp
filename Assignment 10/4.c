//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void firstN(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    firstN(n);
    return 0;
}