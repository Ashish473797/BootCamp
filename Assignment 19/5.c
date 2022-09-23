//Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    printf("Enter 5 strings: \n");
    for(int i=0;i<5;i++)
    gets(str[i]);
    int flag;
    for(int i=0;i<5;i++)
    {
        flag=0;
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(str[i][j]=='@')
            {
            flag=1;
            break;
            }
        }
        if(flag==0)
        printf("%s\n",str[i]);
    }
    return 0;
}