//Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<string.h>
void VandC(char *p)
{
    strupr(p);
    int n = strlen(p);
    int vCount = 0,cCount = 0; 
    for(int i = 0; i < n; i++)
    {
        if(p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U')
        vCount++;
        else if(p[i]>=65 && p[i]<=90)
        cCount++;
    }
    printf("vowels are %d and consonants are %d",vCount,cCount);
}
int main()
{
    char str[32];
    printf("Enter string: ");
    gets(str);
    VandC(str);
    return 0;
}