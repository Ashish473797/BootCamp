//Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int hcf(int a,int b)
{
    int i = a<b?a:b;
    for(i;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        return i;
    }
}
int main()
{
    int a,b,hf;
    printf("enter two number: ");
    scanf("%d%d",&a,&b);
    hf = hcf(a,b);
    printf("HCF is %d",hf);
    return 0;
}
