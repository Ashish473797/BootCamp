//Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    char name[32];
    float cgpa;
};
struct student input()
{
    struct student e;
    printf("Enter student id name and cgpa:- \n");
    scanf("%d",&e.id);
    fflush(stdin);
    gets(e.name);
    scanf("%f",&e.cgpa);
    return e;
} 
void display(struct student e)
{
    printf("student id is %d\n",e.id);
    printf("student name is %s\n",e.name);
    printf("student cgpa is %.1f\n",e.cgpa); 
}
int main()
{
    struct student e1[10];
    for(int i=0;i<10;i++)
    e1[i]=input();
    for(int i=0;i<10;i++)
    display(e1[i]);
    return 0;
}