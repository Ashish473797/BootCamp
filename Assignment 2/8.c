#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n&1)
    printf("Odd number");
    else
    printf("Even number");
    return 0;
}