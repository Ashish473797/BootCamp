//Create an authentication system. It should be menu driven
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[1][2][32];
    char login[1][2][32];
    int n,m;
    while(1)
    {
    printf("Press 1 for Registration\n");
    printf("Press 2 for login\n");
    printf("Press 3 for exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter your email id: ");
        scanf("%s",str[1][1]);
        printf("Make you password  : ");
        scanf("%s",str[1][2]);
        printf("\nRegistration successful...\n\n");
        break;

    case 2:
        printf("Enter your email id: ");
        scanf("%s",login[1][1]);
        printf("Enter your password: ");
        scanf("%s",login[1][2]);
        if(strcmp(login[1][1],str[1][1])==0 && strcmp(login[1][2],str[1][2])==0)
        {
            printf("\nsuccessful login!\n");
            printf("\npress 1 to logout: \n");
            printf("press 0 to exit: \n");
            scanf("%d",&m);
            switch(m)
            {
                case 1:
                printf("\nlogout successful\n\n");
                break;

                case 0:
                exit(0);
            }
        }
        else
        printf("\nusername or password may wrong!\n\n");
        break;

    case 3:
        exit(0);

    default:
        printf("invalid input!");
        break;
    }
    }
    return 0;
}