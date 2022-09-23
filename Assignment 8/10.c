#include<stdio.h>
int main()
{
    int n = 1;
    for(int i=1;i<=4;i++)
    {
        n = 1;
        for(int j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
            {
            printf("%d",n);
            if(j<4)
            n++;
            else
            n--;
            }
            else
            {
            printf(" ");
            if(j>=4)
            n--;
            else
            n++;
            }
        }
        printf("\n");
    }
    return 0;
}