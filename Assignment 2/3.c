#include<stdio.h>
int main()
{
    int a=2,b=3,c=0;
    c=a;
    a=b;
    b=c;
    printf("\nvalue of a = %d and value of b = %d",a,b);
    printf("\n");
    return 0;
}