/*Write a program which takes the month number as an input and display number of 
days in that mont*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter month number: ");
    scanf("%d",&n);
    if(n<=7)
    {
        if(n==2)
        printf("28 days");
        else{
            if(n%2==0)
            printf("30 days");
            else
            printf("31 days");
        }
    }
    else
    {
        if(n%2==0)
            printf("31 days");
            else
            printf("30 days");

    }
    return 0;
}