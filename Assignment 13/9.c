#include<stdio.h>
int count(int n)
{
    if(n<1)
    return 0;
    return count(n/10)+1;
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}