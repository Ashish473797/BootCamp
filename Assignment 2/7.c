//Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n&1)
    printf("1");
    else
    {
        count++;
        while((n&1)==0)
        {
        count++;
        n=n>>1;
        }
    }
    if(count>1)
    printf("%d",count);
    return 0;
}
