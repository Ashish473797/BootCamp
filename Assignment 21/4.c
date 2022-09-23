//Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[32];
    float salary;
};
struct employee input()
{
    struct employee e;
    printf("Enter user id name and salary:-\n");
    scanf("%d",&e.id);
    fflush(stdin);
    gets(e.name);
    scanf("%f",&e.salary);
    return e;
}
void display(struct employee e)
{
    printf("\nemployee id is %d\n",e.id);
    printf("employee name is %s\n",e.name);
    printf("employee salary is %.2f",e.salary); 
}
void sortBysalary(struct employee e[],int size)
{
    int n = size-1;
    struct employee temp;
    while(n)
    {
        for(int i = 0; i < size-1; i++)
        {
            if(e[i].salary>e[i+1].salary)
            {
            temp = e[i];
            e[i] = e[i+1];
            e[i+1] = temp;
            }
            
        }
        n--;
        size--;
    }
}
int main()
{
    struct employee e[10];
    for(int i = 0; i < 10; i++)
    e[i]=input();

    sortBysalary(e,10);

    display(e[9]);
    return 0;
}