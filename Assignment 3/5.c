//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("enter a number: ");
    scanf("%d",&n);
    temp = n/100;
    if(temp>=1 && temp<=9)
    printf("its three digit number");
    else 
    printf("its not three digit number");
    return 0;
}