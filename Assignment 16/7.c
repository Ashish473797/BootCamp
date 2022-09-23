//Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int A[3][3];
    printf("enter a 3*3 matrix:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("lower triangular:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}