/*Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
void rotate(int a[],int size)
{
    int n,d,temp;
    printf("How many times you want to rotate: ");
    scanf("%d",&n);
    printf("Enter 1 for Right Rotation\nEnter 2 for Left Rotation\n");
    scanf("%d",&d);
    switch(d)
    {
        case 1:     
            while(n)
            {
               temp = a[size-1];
               for(int i=size-2;i>=0;i--)
               {
                  a[i+1] = a[i];
               }
               a[0]=temp;
               n--;
            }
        break;
        case 2:
            while(n)
            {
               temp = a[0];
               for(int i=1;i<size;i++)
               {
                  a[i-1] = a[i];
               }
               a[size-1]=temp;
               n--;
            }
        break;
        default:
        printf("invalid input");
    }
}
int main()
{
    int size;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d numbers: ",size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    rotate(a,size);

    for(int i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}