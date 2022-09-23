//Write a function to calculate length of the string.
#include<stdio.h>
int slen(char str[])
{
    int i;
    for(i = 0 ; str[i] ; i++);
    return i;
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    gets(str);
    printf("length of the string is %d",slen(str));
    return 0;
}