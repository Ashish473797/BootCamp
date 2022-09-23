//Write a function to find the repeated character in a given string.
#include<stdio.h>
int main()
{
    char str[32];
    printf("Enter a string: ");
    gets(str);
    int frq[125]={0};
    for(int i = 0 ; str[i] ; i++)
    {
        frq[str[i]]++;
    }
    for(int i = 0 ; i < 123 ; i++)
    {
        if(frq[i] != 0)
        {
            printf("%c ouccurs %d times\n",i,frq[i]);
        }
    }
    return 0;
}