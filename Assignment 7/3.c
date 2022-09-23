#include<stdio.h>
int main()
{
    int n,a=0,b=1;
    int temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(1)
    {
        temp=b;
        b=a+b;
        if(n==b)
        {
            printf("\nFebonacci Series\n\n");
            break;
        }
        else if(b>n)
        {
            printf("\nNot Febonacci Series\n\n");
            break;
        }
        a=temp; 
    }
    return 0;
}