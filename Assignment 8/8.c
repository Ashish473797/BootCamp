#include<stdio.h>
int main()
{
    int n = 1;
    for(int i=1;i<=5;i++)
    {
        n = 1;
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
            printf("%d",n);
            if(j<5)
            n++;
            else
            n--;
            }
            else
            printf(" ");
        }    
        printf("\n");
    }
    return 0;
}