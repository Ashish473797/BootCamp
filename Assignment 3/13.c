//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n%2==0 && n%3==0)
    printf("yes it is divisible by 3 and 2");
    else
    printf("not divisible by 3 and 2");
    return 0;
}