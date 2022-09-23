//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a=1,b=1,c=0,D;
    printf("Enter a quardratic equation: ");
    scanf("%d%d%d",&a,&b,&c);
    D = (b*b)-(4*a*c);
    if(D<0)
    printf("imaginary roots");
    if(D>0)
    printf("real & distinct");
    if(D==0)
    printf("real & equal");
    return 0;
}