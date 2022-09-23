// Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void binary(int n)
{
    if(n>0)
    {
        binary(n>>1);
        printf("%d",n&1);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    binary(n);
    return 0;
}