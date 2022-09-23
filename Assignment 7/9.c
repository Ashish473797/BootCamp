//Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
int main()
{
    int a,n,digit=0,sum=0,u;
    int multiple=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    int temp=a;
    n=a;
    while(temp>0)
    {
        if(temp>0)
        digit++;
        temp = temp/10;
    }
    while(n)
    {
        multiple=1;
        u=n%10;
        for(int i=1;i<=digit;i++)
        {
            multiple = multiple * u;
        }
        sum = sum + multiple;
        n=n/10;
    }
    if(sum==a)
    printf("Armstrong Number");
    else
    printf("Not Armstrong Number");
    return 0;
}