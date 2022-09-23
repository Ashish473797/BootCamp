//Write a function to transform string into uppercase.
#include<stdio.h>
void supper(char str[])
{
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z') 
        str[i]=str[i]-32;
    }
}
int main()
{
    char str[32];
    printf("Enter a string: ");
    fgets(str,32,stdin);
    supper(str);
    fputs(str,stdout);
    return 0;
}