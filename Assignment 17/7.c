//Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
int main()
{
    char str[30];
    int alfa=0,digit=0,special=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;str[i];i++)
    {        
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        alfa++;
        else if(str[i]>=48 && str[i]<=57)
        digit++;
        else
        special++;
    }
    printf("alphabets are %d\nditis are %d\nspecial characters are %d",alfa,digit,special);
    return 0;
}