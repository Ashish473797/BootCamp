//Write a program in C to find the transpose of a given matrix
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
    
    printf("Transpose is :-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        B[j][i]=A[i][j];
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        printf("%d ",B[i][j]);
        printf("\n");
    }
    return 0;
}