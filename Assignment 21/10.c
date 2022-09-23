/*Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student*/
#include<stdio.h>
struct student
{
    char name[32];
    int roll_no;
    float py,ch,maths;
};
struct student input()
{
    struct student s;
    printf("Enter student Name: ");
    fflush(stdin);
    gets(s.name);
    printf("Enter rollno: ");
    scanf("%d",&s.roll_no);
    printf("Mark in Pysics Chemistry and Maths: ");
    scanf("%f%f%f",&s.py,&s.ch,&s.maths);
    return s;
}
void display_mark(struct student s[],int size)
{
    float sum,pct;
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        pct = 0;
        sum = s[i].ch + s[i].maths + s[i].py;
        pct = sum/3;
        printf("%s got %.2f%%\n",s[i].name,pct);
    }
}
int main()
{
    struct student s[3];
    for(int i = 0; i < 3; i++)
    s[i]=input();

    display_mark(s,3);
}