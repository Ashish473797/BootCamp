//Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20],temp[20];
    printf("Enter 10 strings:- \n");
    for(int i=0;i<5;i++)
    gets(str[i]);
    printf("Enter string which you want to search: ");
    gets(temp);
    int flag=0;
    for(int i=0;i<5;i++)
    {
        if(strcmp(temp,str[i])==0)
        {
            printf("yes it is found");
            flag=1;  
        }
        if(i==4 && flag==0)
        printf("not found");
    }
    return 0;
}