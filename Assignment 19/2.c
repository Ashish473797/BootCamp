//Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][20],temp[20];
    printf("Enter 10 cities name:- \n");
    for(int i=0;i<10;i++)
    gets(str[i]);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        if(strcmp(str[i],str[j])>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
        }
    }
    for(int i=0;i<10;i++)
    printf("%s\n",str[i]);
    return 0;
}