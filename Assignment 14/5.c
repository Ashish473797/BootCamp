//Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int arr[10],i,j,count;
    printf("Enter 10 numbers: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        j=0,count=0;
        for(j;j<10;j++)
        {
            if(arr[i]<=arr[j])
            count++;
        }
        if(count==10)
        printf("%d",arr[i]);
    }
    return 0;
}