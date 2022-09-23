//Write a program to input and print text using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter your string: ");
    char *ptr;
    ptr = (char*)malloc(sizeof(char));
    char c;
    int j=1,i=0;
    while(c!='\n')
    {
        c = getc(stdin);
        j++;
        ptr = (char*)realloc(ptr,j*sizeof(char));
        ptr[i]=c;
        i++;
    }
    ptr[i]='\0';
    puts(ptr);
    free(ptr);
    return 0;
}