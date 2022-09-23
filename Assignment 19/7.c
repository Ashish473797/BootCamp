//From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[5][20];
    printf("Enter five ip address:-\n");
    for(int i=0;i<5;i++)
    gets(str[i]);
    int count;
    for(int i=0;i<5;i++)
    {
        count=0;
        if(strlen(str[i])>15 || strlen(str[i])<7)
        {
            printf("%d is not valid ip address\n",i+1);
        }
        else
        {
            char *p = strtok(str[i],".");
            while(p != NULL)
            {
                int n = atoi(p);
                if(n>=0 && n<=255)
                count++;
                else
                {
                    printf("%d is not valid ip address\n",i+1);
                    break;
                }
                p = strtok(NULL,".");
            }
            if(count==4)
            printf("%d is valid ip address\n",i+1);
        }
    }
    return 0;
}