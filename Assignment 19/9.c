/*Write a program that asks the user to enter a username. If the username entered is 
one of the names in the list then the user is allowed to calculate the factorial of a 
number. Otherwise, an error message is displayed*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fac(int a)
{
    if(a==0 || a==1)
    return 1;
    return fac(a-1)*a;
}
int main()
{
    char str[5][32] = {"ashish","akash","balaji","karan","bind"};
    char user[32];
    int n,a,count=0;
    while(1)
    {
    printf("Press 1 to calculate factorial\n");
    printf("Press 0 to exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter your username: ");
        scanf("%s",user);
        for(int i=0;i<5;i++)
        {
            switch(strcmp(user,str[i]))
            {
                case 0:
                printf("Enter number to find factorial: ");
                scanf("%d",&a);
                printf("factorial is %d\n\n",fac(a));
                default:
                count++;
            }
            if(count==5)
            printf("wrong username\n\n");
        }
        break;
    case 0:
    exit(0);
    default:
        printf("invalid input");
        break;
    }
    }
    return 0;
}