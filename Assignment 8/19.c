#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=1;i<=13;i++)
    {
        if(i<=3)
        for(int j=1;j<=19;j++)
        {
            if(j>=4-i && j<=6+i || j>=14-i && j<=16+i)
            printf("*");
            else
            printf(" ");
        }
        else if(i==4)
        for(int j=1;j<=19;j++)
        {
            if(j==7)
            printf(" ASHANU ");
            else if(j>=1 && j<7 || j>=14 && j<=18)
            printf("*");
        }    
        else
        for(int j=1;j<=19;j++)
        {
            if(j>=i-3 && j<=23-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    getch();
    return 0;
}