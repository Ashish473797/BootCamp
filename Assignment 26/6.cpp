/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details.*/
#include<iostream>
using namespace std;
class Student
{
    int id;
    char str[32];
    float cgpa;
    public:
    Student()
    {
        cout<<"Enter student id: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin.ignore();
        cin.getline(str,32);
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    void showData()
    {
        cout<<id<<endl;
        cout<<str<<endl;
        cout<<cgpa<<endl;
    }
};
int main()
{
    Student s1;
    s1.showData();
    return 0;
}