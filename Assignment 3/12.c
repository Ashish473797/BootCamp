//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char alpha;
    printf("enter a alphabet: ");
    scanf("%c",&alpha);
    if(alpha>=65 && alpha<=90)
    printf("upercase");
    else
    printf("lowercase");
    return 0;
}