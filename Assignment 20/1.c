//Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a,b;
    printf("Enter value for a and b: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("value of a is %d and b is %d",a,b);
    return 0;
}