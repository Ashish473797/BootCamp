//Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse(int a[],int size)
{
    int temp;
    for(int i=0;i<size/2;i++)
    {
        temp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = temp;
    }

}
int main()
{
    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d number: ",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,size);
    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}