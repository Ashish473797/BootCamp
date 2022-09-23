//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a year: ");
    scanf("%d",&n);
    if(n%100 == 0)
    {
        if(n%400 == 0)
        printf("leap year");
        else
        printf("not laep year");
    }
    else
    {
        if(n%4 == 0)
        printf("leap year");
        else
        printf("not leap year");
    }
    return 0;
}