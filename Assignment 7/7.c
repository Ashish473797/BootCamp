#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    for(a+1;a<b;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            break;
        }
        if(i==a)
        printf("%d ",a);
    }
    return 0;
}