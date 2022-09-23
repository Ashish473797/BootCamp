/*Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],se = 0,so = 0;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] & 1)
        so = so + arr[i];
        else
        se = se + arr[i];
    }
    printf("sum of even number is %d",se);
    printf("\nsum of odd number is %d",so);
    return 0;
}