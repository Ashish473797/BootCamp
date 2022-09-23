//Write a function to count words in a given string.
#include<stdio.h>
#include<string.h>
int countWord(char str[])
{
    int flag = 0;
    char cstr[50]={0};
    int i,j;
    for(i=0, j=0; str[i] ; i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            cstr[j]=str[i];
            j++;
            flag = 1; 
        }
        if(flag == 1 && str[i] == 32)
        {
            cstr[j]=str[i];
            j++;
            flag = 0;
        }
    }
    if(cstr[j-1]==32)
    cstr[j-1]='\0'; 
    int count = 0;
    for(int k=0 ; cstr[k] ;k++)
    {
        if(cstr[k]==32)
        count++;
    }
    return count+1;
}
int main()
{
    char str[50];
    gets(str);
    int n = countWord(str);
    printf("total word are %d",n);
    return 0;
}