//Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    temp = (n/2) * 2;
    if(n==temp)
    printf("even number");
    else
    printf("odd number");
    return 0;
}