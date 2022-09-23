//Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3];
    printf("Enter first matrix of order 3*3: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&A[i][j]);
    }
    printf("Enter second matrix of order 3*3: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&B[i][j]);
    }
    printf("sum is\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",A[i][j]+B[i][j]);
        printf("\n");
    }
    return 0;
}