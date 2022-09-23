//Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int n;
    printf("enter year: ");
    scanf("%d",&n);
    switch (n%100==0)
    {
    case 1:
        switch (n%400==0)
        {
        case 1:
            printf("leap year");
            break;
        
        case 0:
            printf("not leap year");
            break;
        }
        break;

    case 0:
       switch (n%4==0)
       {
       case 1:
           printf("leap year");
           break;

       case 0:
           printf("not leap year");
           break;
       }
       break;    
    }
    return 0;
}
