/*Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int n,u;
    scanf("%d",&n);
    u = n%10;
    u = 0;
    n = (n/10*10) + u;
    printf("number is %d",n);
    return 0;
}