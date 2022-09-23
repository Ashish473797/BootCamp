//Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter three digit number: ");
    scanf("%d",&n);
    int u=n%10;
    n=u*100+n/10;
    printf("%d",n);
    return 0;
}