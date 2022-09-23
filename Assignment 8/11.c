#include<stdio.h>
int main()
{
    char c = 'A';
    for(int i=1;i<=5;i++)
    {
        c = 'A';
        for(int j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
            printf("%c",c);
            if(j<5)
            c++;
            else
            c--;
            }
            else
            printf(" ");
        }    
        printf("\n");
    }
    return 0;
}