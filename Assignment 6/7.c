#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n)
    {
        if(n>0)
        count++;
        n=n/10;
    }
    printf("digits are %d",count);
    return 0;
}