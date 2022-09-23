//Write a program in C to copy one string to another string.
#include<stdio.h>
int main()
{
    char str1[30],str2[30];
    printf("Enter string: ");
    gets(str1);
    int i;
    for(i=0;str1[i];i++)
    {
        str2[i]=str1[i];
    }
    for(int j=0;j<i;j++)
    {
        printf("%c",str2[j]);
    }
    return 0;
}