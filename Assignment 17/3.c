//Write a program to count vowels in a given string.
#include<stdio.h>
int main()
{
    char vowel[]="AEIOU";
    char svowel[]="aeiou";
    char str[32];
    int count=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0;vowel[i];i++)
    {
        for(int j=0;str[j];j++)
        {
            if(vowel[i]==str[j] || svowel[i]==str[j])
            {
                count++;
                break;
            }
        }
    }
    printf("no. of vowels are %d",count);
    return 0;
} 