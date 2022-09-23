//Write a function to reverse a string.
#include<stdio.h>
void srev(char str[])
{
    int i,temp;
    for(i=0;str[i];i++);
    int n=i-1;
    for(int j=0;j<n/2;j++)
    {
        temp=str[j];
        str[j]=str[i-2];
        str[i-2]=temp;
        i--;
    }
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    fgets(str,32,stdin);
    srev(str);
    fputs(str,stdout);
    return 0;
}