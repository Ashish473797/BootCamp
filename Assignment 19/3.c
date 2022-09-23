//Write a program to read and display a 2D array of strings in C language.
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    printf("how many string you wnat: ");
    scanf("%d",&n);
    char str[n][20];
    printf("Enter %d strings:- \n",n);
    for(int i=0;i<n;i++)
    scanf("%s",str[i]);
    for(int i=0;i<n;i++)
    printf("%s\n",str[i]);
    return 0;
}