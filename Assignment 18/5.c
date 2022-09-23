//Write a function to transform string into lowercase.
#include<stdio.h>
void slower(char str[])
{
    for(int i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z') 
        str[i]=str[i]+32;
    }
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    fgets(str,32,stdin);
    slower(str);
    fputs(str,stdout);
    return 0;
}