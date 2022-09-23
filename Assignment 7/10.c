#include<stdio.h>
int main()
{
    int n=1,u,digit,sum,multiple;
    int a,b;
    while(n<1000)
    {
    a=n,b=n,sum=0,digit=0;
    while(a>0)
    {
        digit++;
        a = a/10;
    }
    while(b>0)
    {
        multiple=1;
        u=b%10;
        for(int i=1;i<=digit;i++)
        {
            multiple = multiple * u;
        }
        sum = sum + multiple;
        b=b/10;
    }
    if(sum==n)
    printf("%d  ",n);
    n++;
    }    
    return 0;
}