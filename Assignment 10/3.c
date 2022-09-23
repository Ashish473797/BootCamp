#include<stdio.h>
int even_odd(int n)
{
    if(n&1)
    return 0;
    return 1;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("return %d",even_odd(n));
    return 0;
}