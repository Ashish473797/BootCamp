//Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Good\n");
        break;
    case 2:
        printf("Better\n");
        break;
    case 3:
        printf("Best\n");
        break;                    
    default:
        printf("invalid");
    }
    return 0;
}
