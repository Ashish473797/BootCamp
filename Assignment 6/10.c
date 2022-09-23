#include<stdio.h>
int main()
{
    int n,sum=0,u;
    scanf("%d",&n);
    while(n)
    {
        u = n%10;
        sum = sum * 10 + u;
        n = n/10;
    }
    printf("reverse is %d",sum);
    return 0;
}