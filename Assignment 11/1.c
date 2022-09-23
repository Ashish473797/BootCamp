//Write a function to calculate LCM of two numbers.(TSRS)
#include<stdio.h>
int lcm(int a,int b)
{
    int i = a>b?a:b;
    for(i;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        return i;
    }
}
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    int lm = lcm(a,b);
    printf("lcm is %d",lm);
    return 0;
}