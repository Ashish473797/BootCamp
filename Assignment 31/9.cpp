/*Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/
#include<iostream>
using namespace std;
class Student
{
    protected:
        char name[32];
        int rollNo;
    public:
        void inputStu()
        {
            cout<<"\n ---------------------------------------";
            cout<<"\n Enter Roll No.            : ";
            cin>>rollNo;
            cout<<"\n Enter Student Name        : ";
            cin.ignore();
            cin.getline(name,32);
        }
        void disStu()
        {
            cout<<"\n ---------------------------------------";
            cout<<"\n ********** Student Marklist ***********";
            cout<<"\n ---------------------------------------";
            cout<<"\n Roll No.                  : "<<rollNo;
            cout<<"\n Student Name              : "<<name<<endl;
        }
};
class StudentExam : public Student
{
    protected:
        int sub1,sub2,sub3,sub4,sub5,sub6;
        float per;
    public:
        void inputExm()
        {
            inputStu();
            cout<<"\n Enter Marks For Maths    : ";
            cin>>sub1;
            cout<<"\n Enter Marks For chemistry: ";
            cin>>sub2;
            cout<<"\n Enter Marks For Hindi    : ";
            cin>>sub3;
            cout<<"\n Enter Marks For English  : ";
            cin>>sub4;
            cout<<"\n Enter Marks For Physics  : ";
            cin>>sub5;
            cout<<"\n Enter Marks For Bioligy  : ";
            cin>>sub6;
        }
        void disExm()
        {
            disStu();
            cout<<"\n Marks of Maths    : "<<sub1;
            cout<<"\n Marks of chemistry: "<<sub2;
            cout<<"\n Marks of Hindi    : "<<sub3;
            cout<<"\n Marks of English  : "<<sub4;
            cout<<"\n Marks of Physics  : "<<sub5;
            cout<<"\n Marks of Bioligy  : "<<sub6;
        }
};
class StudentResult : public StudentExam
{
    public:
    void cal()
    {
        per = (sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
        cout<<"\n\n Total Percentage is  :  "<<per;
        cout<<"\n ---------------------------------------\n";
    }
};
int main()
{
    StudentResult str;
    int cnt, i;
    cout<<"\n Enter No. of Student You Want? : ";
    cin>>cnt;
    for(i=0; i<cnt; i++)
    {
        str.inputExm();
        str.disExm();
        str.cal();
    }
    return 0;
}