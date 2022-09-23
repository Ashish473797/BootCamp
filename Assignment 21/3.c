//Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[32];
    float salary;
};
struct employee input()
{
    struct employee e;
    printf("Enter user id name and salary:- \n");
    scanf("%d",&e.id);
    fflush(stdin);
    gets(e.name);
    scanf("%f",&e.salary);
    return e;
} 
void display(struct employee e)
{
    printf("employee id is %d\n",e.id);
    printf("employee name is %s\n",e.name);
    printf("employee salary is %.2f",e.salary); 
}
int main()
{
    struct employee e1;
    e1=input();
    display(e1);
    return 0;
}