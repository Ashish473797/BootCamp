#include<stdio.h>
int main()
{
    int a,i;
    printf("enter a number: ");
    scanf("%d",&a);
    int n=a+1;
    while(n)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            break;
        }
        if(i==n)
        {
            printf("%d",n);
            break;
        }
        n++;
    }
    return 0;
}