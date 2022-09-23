//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    int start=n;
    while(start)
    {
        temp=b;
        b=a+b;
        a=temp;
        start--; 
    }
    printf("%dth term is %d",n,b);
    return 0;
}