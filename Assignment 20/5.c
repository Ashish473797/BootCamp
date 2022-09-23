//Write a program to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int findMax(int *p,int *q)
{
    if(*p>*q)
    return *p;
    return *q;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Greater number is %d",findMax(&a,&b));
    return 0;
}