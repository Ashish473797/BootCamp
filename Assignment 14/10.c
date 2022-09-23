//Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("How many digit you want: ");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter %d number: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}