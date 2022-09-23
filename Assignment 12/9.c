// Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int n)
{
    if(n>0)
    {
        octal(n/8);
        printf("%d",n%8);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    octal(n);
    return 0;
}