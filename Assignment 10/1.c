#include<stdio.h>
float area(int r)
{
    return 3.14*r*r;
}
int main()
{
    int r;
    printf("enter radius of a circle: ");
    scanf("%d",&r);
    float A = area(r);
    printf("Area is %.2f",A);
    return 0;
}