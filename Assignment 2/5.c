#include<stdio.h>
int main()
{
    int n=123,sum=0;
    sum = (n/100)+((n/10)%10)+(n%10);
    printf("sum is %d",sum);
    return 0;
}