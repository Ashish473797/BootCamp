//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void firstN_febo(int n)
{
    int a=0,b=1;
    int temp;
    while(n)
    {
        temp=b;
        b=a+b;
        printf("%d ",b); 
        a=temp;
        n--; 
    }
}
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    firstN_febo(n);
    return 0;
}
