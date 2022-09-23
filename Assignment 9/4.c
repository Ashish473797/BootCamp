
#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
    printf("choice any option:\n1 for isosceles triangle\n2 for Right angle triangle\n3 for Equilateral triangle\n4 for exit\n");
    int n,a,b,c;
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter three sides: ");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b)
        printf("valid\n");
        else if(a==c)
        printf("valid\n");
        else if(b==c)
        printf("valid\n");
        else
        printf("not valid\n");
        break;

        case 2:
        printf("Enter three sides: ");
        scanf("%d%d%d",&a,&b,&c);
        if(a>b)
        {
            if(a*a==b*b+c*c)
            printf("valid\n");
            else
            printf("not valid\n");
        }
        else if(b>c)
        {
            if(b*b==a*a+c*c)
            printf("valid\n");
            else
            printf("not valid\n");
        }
        else
        {
            if(c*c==b*b+a*a)
            printf("valid\n");
            else
            printf("not valid\n");
        }
        break;

        case 3:
        printf("Enter three sides: ");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b && b==c && c==a)
        printf("valid");
        else
        printf("not valid");
        break;

        case 4:
        exit(0);

        default:
        printf("invalid input");
        break;
    }
    }
    return 0;
}