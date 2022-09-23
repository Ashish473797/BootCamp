//Write a program to check whether a given number is positive, negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    if(n>0)
    printf("positive number");
    else if(n<0)
    printf("negative number");
    else
    printf("zero");
    return 0;
}