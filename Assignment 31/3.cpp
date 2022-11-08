/*Write a C++ program to calculate the percentage of a student using multi-level inheritance. 
Accept the marks of three subjects in base class. A class will be derived from the above mentioned class 
which includes a function to find the total marks obtained and another class derived from this class 
which calculates and displays thepercentage of students.*/
#include<iostream>
using namespace std;
class Student
{
    float marks1,marks2,marks3;
    public:
    void setData()
    {
        cout<<"Enter three Marks for three Subject: ";
        cin>>marks1>>marks2>>marks3;
    }
    float getMarks1()
    {
        return marks1;
    }
    float getMarks2()
    {
        return marks2;
    }
    float getMarks3()
    {
        return marks3;
    }
};
class TotalMarks : public Student
{
    public:
    float totalMarks(Student s)
    {
        return (s.getMarks1() + s.getMarks2() + s.getMarks3());
    }
};
class Percentage : public TotalMarks
{
    public:
    float getPercentage(Student s, TotalMarks t)
    {
        return (t.totalMarks(s)/300.0)*100;
    }
};
int main()
{
    Student s1,s2;
    cout<<"---------------------------------------------"<<endl<<endl;
    s1.setData();
    s2.setData();
    TotalMarks m1,m2;
    cout<<"---------------------------------------------"<<endl<<endl;
    cout<<"Total marks of first Studnet from 300 is "<<m1.totalMarks(s1)<<endl;
    cout<<"Total marks of second Studnet from 300 is "<<m2.totalMarks(s2)<<endl;
    cout<<"---------------------------------------------"<<endl<<endl;
    Percentage p1,p2;
    cout<<"Student first Got "<<p1.getPercentage(s1,m1)<<"%"<<endl;
    cout<<"Student second Got "<<p2.getPercentage(s2,m2)<<"%"<<endl<<endl;
    cout<<"---------------------------------------------"<<endl<<endl;
    return 0;
}