//Write a function to compare two strings.
#include<stdio.h>
int scmp(char str1[],char str2[])
{
    int i=0;
    while(str1[i] || str2[i])
    {
        if(str1[i]!=str2[i])
        return 1;
        i++;
    }    
    return 0;

}
int main()
{
    char str1[32],str2[32];
    printf("Enter first String: ");
    gets(str1);
    printf("Enter second String: ");
    gets(str2);
    if(scmp(str1,str2))
    printf("Not Same");
    else
    printf("Same string");
    return 0;
}