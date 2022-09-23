//Write a program to print the strings which are palindrome in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    printf("Enter 5 strings:-\n");
    for(int i=0;i<5;i++)
    gets(str[i]);
    for(int i=0;i<5;i++)
    {
        for(int j=0,k=strlen(str[i])-1 ; j<=k/2 ; j++,k--)
        {
            if(str[i][j]!=str[i][k])
            {
                printf("%s is not palindrome\n",str[i]);
                break;
            }
            if(j==k/2)
            printf("%s is palindrome\n",str[i]);
        }
    }
    return 0;
}