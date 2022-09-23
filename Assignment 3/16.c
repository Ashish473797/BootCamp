/*Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char n;
    printf("enter a charactera: ");
    scanf("%c",&n);
    if(n>=65 && n<=90)
    printf("alphabet(uppercase)");
    else if(n>=97 && n<=122)
    printf("alphabet(lowercase)");
    else if(n>=48 && n<=57)
    printf("digit");
    else
    printf("special character");
    return 0;
}