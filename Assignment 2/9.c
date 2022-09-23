/*Write a program to print size of an int, a float, a char and a double type variable*/
#include<stdio.h>
int main()
{
    int size;
    printf("\n%d",size=sizeof(int));
    printf("\n%d",size=sizeof(float));
    printf("\n%d",size=sizeof(char));
    printf("\n%d",size=sizeof(double));
    return 0;
}