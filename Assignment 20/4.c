//Write a program in C to demonstrate how to handle the pointers in the program.
#include<stdio.h>
int main()
{
    int n = 10;
    int *p = &n;
    int **q = &p;
    int ***r = &q;
    printf("%d %d %d %d\n",n,*p,**q,***r);
    printf("%d %d %d %d\n",&n,&p,&q,&r);
    printf("%d %d %d\n",p,q,r);
    printf("%d %d %d",*q,*r,**r);
    return 0;
}