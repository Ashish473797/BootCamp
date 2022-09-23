//Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter string: ");
    gets(str);
    for(i=0;str[i];i++);
    printf("lenght of string is %d",i);
    return 0;
}