#include<stdio.h>
int main()
{
    int hour,minut;
    printf("Enter time in hh:mm format: ");
    scanf("%d:%d",&hour,&minut);
    printf("%d Hour and %d Minut",hour,minut);
    return 0;
}