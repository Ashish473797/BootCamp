/*Write a program to input a number from the user and also input a digit. Append a 
digit in the number and print the resulting number. (Example - number=234 and 
digit=9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
{
    int n,u;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a number to append: ");
    scanf("%d",&u);
    n=n*10;
    n=n+u;
    printf("Now the number is %d",n);
    return 0;
}