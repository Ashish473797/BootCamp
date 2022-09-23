#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    int start=n;
    while(start)
    {
        temp=b;
        b=a+b;
        printf("%d ",b); 
        a=temp;
        start--; 
    }
    return 0;
}