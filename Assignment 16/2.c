//Write a program to calculate the product of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],sum,k;
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
    printf("product is\n");

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                k=0;
                sum=0;
                for(k;k<3;k++)
                {
                    sum = sum + (A[i][k] * B[k][j]);
                }
                printf("%d ",sum);
            }
            printf("\n");   
        }

    return 0;
}