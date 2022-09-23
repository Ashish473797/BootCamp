//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printN(int n)
{
    if(n>0){
    printf("%d ",n);
    printN(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printN(n);
    return 0;
}