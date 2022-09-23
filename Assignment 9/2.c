#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
    printf("choice any option:\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for division\n5 for exit\n");
    int n,a,b;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        printf("sum is %d\n",a+b);
        break;
        case 2:
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        printf("difference is %d\n",a-b);
        break;
        case 3:
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        printf("product is %d\n",a*b);
        break;
        case 4:
        printf("Enter two number: ");
        scanf("%d%d",&a,&b);
        printf("divition is %d\n",a/b);
        break;
        case 5:
        exit(0);
        default:
        printf("invalid input");
        break;
    }
    }
    return 0;
}