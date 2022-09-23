// Write a recursive function to calculate HCF of two numbers
#include<stdio.h>
int count(int a,int b)
{
    if(b==0)
    return a;
    return (b,b%a);
}
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d%d",&a,&b);
    b<a?printf("%d",count(b,a)):printf("%d",count(a,b));
    return 0;
}