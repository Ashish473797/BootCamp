#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    n=a<b?a:b;
    for(n;n>0;n--)
    {
        if(a%n==0 && b%n==0)
        {
            printf("hcf is %d",n);
            break;
        }
    }
    return 0;
}