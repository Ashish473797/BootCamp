//Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<string.h>
void swap(char str1[],char str2[])
{
    char temp[32];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
int main()
{
    char str1[32],str2[32];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    swap(str1,str2);
    printf("first string is %s\nsecond string is %s",str1,str2);
    return 0;
}