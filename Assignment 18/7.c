//Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int palindrome(char str[])
{
    char cstr[32];
    strcpy(cstr,str);
    int n = strlen(str), temp;
    for(int i = 0 ; i < n/2 ; i++)
    {
        temp = str[i];
        str[i] = str[n-1];
        str[n-1] = temp;
        n--;
    }
    int i;
    for(i = 0 ; str[i] ; i++)
        if(str[i] != cstr[i])
        return 0;
        return 1;

}
int main()
{
    char str[32];
    printf("Enter a string: ");
    gets(str);
    if(palindrome(str))
    printf("Yes it is palindrome");
    else
    printf("Not palindrome");
    return 0;
}