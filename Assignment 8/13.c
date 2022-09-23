#include<stdio.h>
int main()
{
    char c;
    for(int i=1;i<=7;i++)
    {
        c = 'A';
        for(int j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
            printf("%c",c);
            if(j<7)
            c++;
            else
            c--;
            }
            else
            {
            printf(" ");
            if(j>=7)
            c--;
            else
            c++;
            }
        }
        printf("\n");
    }
    return 0;
}