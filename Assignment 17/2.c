//Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    char c;
    int count=0;
    printf("Enter a string: ");
    gets(str);
    printf("which character you want to count: ");
    scanf("%c",&c);
    strupr(str);
    strupr(&c);
    for(int i=0;str[i];i++)
    {
        if(c==str[i])
        count++;
    }
    printf("occurance are %d",count);
    return 0;
}