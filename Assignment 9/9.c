//Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch (n%2==0)
    {
    case 1:
        printf("upper nearest odd number is %d",n+1);
        break;
    
    default:
        printf("input is not a even number");
        break;
    }
    return 0;
}