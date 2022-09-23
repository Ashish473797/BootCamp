/*Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.*/
#include<stdio.h>
int main()
{
    float r,u;
    printf("Enter amount in INR to convert in USD: ");
    scanf("%f",&r);
    u = r/76.23;
    printf("%f in USD",u);
    return 0;
}