//Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int n;
    printf("select the day: \n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("injoy your great Sunday\n");
        break;
    case 2:
        printf("injoy your great Monday\n");
        break;
    case 3:
        printf("injoy your great Tuesday\n");
        break;
    case 4:
        printf("injoy your great Wednesday\n");
        break;
    case 5:
        printf("injoy your great Thursday\n");
        break;
    case 6:
        printf("injoy your great Friday\n");
        break;
    case 7:
        printf("injoy your great Saturday\n");
        break;                    
    default:
        printf("invalid input");
    }
    return 0;
}
