//Write a program to calculate the length of the string using a pointer.
#include<stdio.h>
int length(char *ptr)
{
    int i;
    for(i=0; ptr[i]; i++);
    return i;
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    gets(str);
    printf("length is %d",length(str));
    return 0;
}