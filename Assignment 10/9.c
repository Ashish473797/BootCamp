//Write a function to check whether a given number contains a given digit or not. (TSRS)
#include<stdio.h>
int checkDigit(int n,int r)
{
    int u;
    while(n>0)
    {
        u=n%10;
        if(u==r)
        return 1; 
        n=n/10;  
    }
    return 0;
}
int main()
{
    int N,R;
    printf("enter a number and digit to find: ");
    scanf("%d%d",&N,&R);
    if(checkDigit(N,R))
    printf("true");
    else
    printf("false");
    return 0;
}