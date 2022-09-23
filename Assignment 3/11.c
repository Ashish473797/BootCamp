/*Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter the subjects marks: ");
    int count=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<33)
    count++;
    if(b<33)
    count++;
    if(c<33)
    count++;
    if(d<33)
    count++;
    if(e<33)
    count++;
    if(count<3)
    printf("pass");
    else
    printf("fail");
    return 0;
}
