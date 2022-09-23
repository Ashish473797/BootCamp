//Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int count=0;
    printf("Enter 3*3 matrix:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);      
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==0)
            count++;   
        }
    }
    if(count>9/2)
    printf("sparse matrix");
    else
    printf("dense matrix");
    return 0;
}