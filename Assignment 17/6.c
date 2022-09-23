//Write a program to reverse a string.
#include<stdio.h>
int main()
{
    char str[32],temp;
    int i;
    printf("Enter a string: ");
    fgets(str,32,stdin);
    for(i=0;str[i];i++);
    int n=i-1;
    for(int j=0;j<n/2;j++)
    {
        temp=str[j];
        str[j]=str[i-2];
        str[i-2]=temp;
        i--;
    }
    fputs(str,stdout);
    return 0;
}