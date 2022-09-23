//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
    printf("yes it is divisible");
    else
    printf("not divisible");
    return 0;
}