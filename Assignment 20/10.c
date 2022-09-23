//Write a program to print a string in reverse using a pointer.
#include<stdio.h>
#include<string.h>
void reverse(char *p)
{
    int n = strlen(p),temp;
    for(int i = 0; i <= n/2; i++)
    {
        temp = p[i];
        p[i] = p[n-1];
        p[n-1] = temp;
        n--;
    }
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    gets(str);
    reverse(str);
    puts(str);
    return 0;
}