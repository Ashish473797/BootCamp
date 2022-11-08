/*Write a C++ program to design a base class Person (name, address, phone_no). 
Derive a class Employee (eno, ename) from Person. Derive aclass Manager (designation, department name, basic-salary) 
from Employee. Write a menu driven program to:

a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
using namespace std;
class Person
{
    protected:
        char name[32];
        char address[50];
        long long phone_no;
};
class Employee : public Person
{
    protected:
        int eno;
        char ename[32];
};
class Manager : public Employee
{
    protected:
        char designation[32];
        char department[32];
        int salary;
    public:
        void setData()
        {
            cout<<"Enter employee number: ";
            cin>>eno;
            cout<<"Enter employee name  : ";
            cin.ignore();
            cin.getline(ename,32);
            cout<<"Enter employee addess: ";
            cin.ignore();
            cin.getline(address,50);
            cout<<"Enter phone Number   : ";
            cin>>phone_no;
            cout<<"Enter designation    : ";
            cin.ignore();
            cin.getline(designation,32);
            cout<<"Enter department     : ";
            cin.ignore();
            cin.getline(department,32);
            cout<<"Enter basic Salary   : ";
            cin>>salary;
        }
        int getSalary()
        {
            return salary;
        }
        char * getEname()
        {
            return ename;
        }
};
int main()
{
    int size,salary = 0,index;
    cout<<"How Many Manager You Want To Enter: ";
    cin>>size;
    Manager no[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter Detail of Manager"<<endl;
        cout<<"-----------------------"<<endl;
        no[i].setData();
        if((no[i].getSalary())>salary)
        {
            salary = no[i].getSalary();
            index = i;
        }
        cout<<endl;
    }
    cout<<"Manager with Highest Salary is "<<salary<<endl<<"And, Manager Name is "<<no[index].getEname();
}