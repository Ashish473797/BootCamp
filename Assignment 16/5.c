//Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int A[3][3],sum=0;
    printf("Enter first matrix of order 3*3: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&A[i][j]);
    }
    
    for(int i=0,j=2;i<3 && j>=0;i++,j--)
    {
        sum = sum + A[i][j];
    }

    printf("sum of diagonal is %d",sum);
    return 0;
}