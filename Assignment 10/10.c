/*write a function to print all prime factors of a given number. For example, if the 
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
#include<stdio.h>
void printAll_prime(int n)
{
    int a=2;
    while(n!=1)
    {
        if(n%a==0)
        {
        printf("%d ",a);
        n=n/a;
        }
        else
        a++;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printAll_prime(n);
    return 0;
}