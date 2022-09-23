/*Write a function to check whether a given string is an alphanumeric string or not. 
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include<stdio.h>
int alphaN(char str[])
{
    int alpha=0, num=0; 
    for(int i=0 ; str[i] ; i++)
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        alpha++;
        if(str[i]>=48 && str[i]<=57)
        num++;
    }
    if(alpha>0 && num>0)
    return 1;
    return 0;
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    gets(str);
    if(alphaN(str))
    printf("Yes it is alphanumeric");
    else
    printf("Not alphanumeric");
    return 0; 
}