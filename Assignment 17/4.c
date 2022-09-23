//Write a program to convert a given string into uppercase.
#include<stdio.h>
int main()
{
    char str[32];
    printf("Enter a string: ");
    fgets(str,32,stdin);
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z') 
        str[i]=str[i]-32;
    }
    fputs(str,stdout);
    return 0;
}