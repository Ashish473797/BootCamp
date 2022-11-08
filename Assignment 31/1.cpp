/*Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/
#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    char name[32];
    int age;
    public:
    void setName(const char *str)
    {
        strcpy(name,str);
    }
    void setAge(int a)
    {
        age = a;
    }
    char * getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    } 
};
class Employee : public Person
{
    int empid;
    int salary;
    public:
    void setEmpid(int id)
    {
        empid = id;
    } 
    void setSalary(int s)
    {
        salary = s;
    } 
    int getEmpid()
    {
        return empid;
    } 
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Person p1;
    Employee e1;
    p1.setName("Ashish Kumar Gupta");
    p1.setAge(24);
    cout<<"Name is "<<p1.getName()<<endl;
    cout<<"Age is "<<p1.getAge()<<endl;
    e1.setName("Anamika Singh");
    e1.setAge(22);
    e1.setEmpid(1011);
    e1.setSalary(50000);
    cout<<"Name is "<<e1.getName()<<endl;
    cout<<"Age is "<<e1.getAge()<<endl;
    cout<<"id is "<<e1.getEmpid()<<endl;
    cout<<"Salary is "<<e1.getSalary()<<endl;
    return 0;
}