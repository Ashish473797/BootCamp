//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int greater(int a[],int n)
{
    int i,j,count; 
    for(i=0;i<n;i++)
    {
        j=0,count=0;
        for(j;j<n;j++)
        {
            if(a[i]>=a[j])
            count++;
        }
        if(count==n)
        return a[i];
    }
}
int main()
{
    int n;
    printf("How many number you want: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("greater number is %d",greater(a,n));
    return 0;
}