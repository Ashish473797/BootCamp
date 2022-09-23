#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        if(i<=5)
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            printf("*");
            else
            printf(" ");
        }
        else
        for(int j=1;j<=9;j++)
        {
            if(j>=i-4 && j<=14-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}