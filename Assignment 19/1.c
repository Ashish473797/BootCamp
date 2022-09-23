//Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user
#include<stdio.h>
#include<string.h>
int main()
{
    char str[5][20];
    printf("Enter 5 strings: \n");
    for(int i=0;i<5;i++)
    gets(str[i]);

    for(int i=0;i<5;i++)
    strupr(str[i]);
    int countV;
    for(int i=0;i<5;i++)
    {
        countV=0;
        for(int j=0;str[i][j]!=0;j++)
        {
            if(str[i][j]=='A' || str[i][j]=='E' || str[i][j]=='I' || str[i][j]=='O' || str[i][j]=='U')
            countV++;
        }
        printf("%s has %d vowels\n",str[i],countV);
    }
    return 0;
}