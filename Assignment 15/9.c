//Write a function in C to merge two arrays of the same size sorted in descending order
#include<stdio.h>
void mergD(int arr1[],int arr2[],int a,int b)
{
    int arr3[a+b];
    int i=0,j=0,k=0;
    for(k=0;k<a+b;k++)
    {
            if(i>=a)
            {
                arr3[k]=arr2[j];
                j++;
            }
            else if(j>=b)
            {
                arr3[k]=arr1[i];
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
            arr3[k]=arr1[i];
            i++;
            }
            else
            {
            arr3[k]=arr2[j];
            j++;
            }
    }
    for(int k=0;k<a+b;k++)
    printf("%d ",arr3[k]);
}
int main()
{
    int a,b;
    printf("Enter size of first array and second array: ");
    scanf("%d%d",&a,&b);
    int arr1[a], arr2[b];
    printf("\nEnter element in descending order for first array: ");
    for(int i=0;i<a;i++)
    scanf("%d",&arr1[i]);
    printf("\nEnter element in descending order for second array: ");
    for(int i=0;i<b;i++)
    scanf("%d",&arr2[i]);
    mergD(arr1,arr2,a,b);
    return 0;
}