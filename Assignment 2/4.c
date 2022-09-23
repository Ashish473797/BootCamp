#include<stdio.h>
int main()
{
    int a=2,b=3;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nvalue of a = %d and value of b = %d",a,b);
    printf("\n");
    return 0;
}