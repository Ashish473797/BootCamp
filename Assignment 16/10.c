//Write a program in C to find the row with maximum number of 1s.
#include<stdio.h>
int main()
{
    int arr[3][3];
    int sum,max=0,index;
    printf("Enter 3*3 matrix:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        sum = 0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            sum = sum + arr[i][j];
        }
        if(sum>max)
        {
        max=sum;
        index = i+1;
        }
    }
    printf("row %d have max 1s ",index);
    return 0;
}