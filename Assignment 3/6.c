//Write a program to print greater between two numbers. Print one number of both are the same.
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a number: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is greater",a);
    else
    printf("%d is greater",b);
    return 0;
}