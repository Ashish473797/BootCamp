//Write a C program to sort a string array in ascending order.
#include<stdio.h>
int main()
{
    char str[32],temp;
    printf("Enter a String: ");
    gets(str);
    int i;
    for(i=0;str[i];i++);
    int n=i-1;
    while(n)
    {
        for(int j=0;j<i-1;j++)
        {
            if(str[j]>str[j+1])
            {
            temp = str[j];
            str[j] = str[j+1];
            str[j+1] = temp;
            }
        }
        i--;
        n--;
    }
    puts(str);
    return 0;
}