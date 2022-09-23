//Write a program to check whether two given numbers are co-prime numbers or not.
#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    n=a<b?a:b;
    for(n;n>0;n--)
    {
        if(a%n==0 && b%n==0)
        {
            if(n==1)
            {
                printf("Co-Prime");
                break;
            }
            else
            {
            printf("Not Co-Prime");
            break;
            }
            
        }
    }
    return 0;
}
