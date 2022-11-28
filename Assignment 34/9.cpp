/*A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age
Write a C++ program to read the above file. Create a new file such as Adm.dat,
Sal.dat, Pro.dat, IT.dat respectively to store the employee details according to their department.*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee
{
    protected:
        int id;
        string name, address, dept;
        long long phone;
        int age;
    public:
        void setData()
        {
           cout<<"Enter id: ";
           cin>>id;
           cout<<"Enter name: ";
           cin.ignore();
           getline(cin,name);
           cout<<"Enter address: ";
           cin.ignore();
           getline(cin,address);
           cout<<"Enter department: ";
           cin.ignore();
           getline(cin,dept);
           cout<<"Enter phone Number: ";
           cin>>phone;
           cout<<"Enter age: ";
           cin>>age;
        }
        void save_to_file()
        {
            Employee e2;
            ifstream read;
            read.open("emp.dat", ios::in);
            while(!read.eof())
            {
                read>>e2.id;
                read>>e2.name;
                read>>e2.address;
                read>>e2.dept;
                read>>e2.phone;
                read>>e2.age;
                if(dept=="Admin")
                {
                    ofstream write;
                    write.open("Admin.dat", ios::app);
                    write<<e2.id;
                    write<<e2.name;
                    write<<e2.address;
                    write<<e2.dept;
                    write<<e2.phone;
                    write<<e2.age;
                }
                else if(dept=="Sales")
                {
                    ofstream write;
                    write.open("Sales.dat", ios::app);
                    write<<e2.id;
                    write<<e2.name;
                    write<<e2.address;
                    write<<e2.dept;
                    write<<e2.phone;
                    write<<e2.age;
                }
                else if(dept=="Production")
                {
                    ofstream write;
                    write.open("Production.dat", ios::app);
                    write<<e2.id;
                    write<<e2.name;
                    write<<e2.address;
                    write<<e2.dept;
                    write<<e2.phone;
                    write<<e2.age;
                }
                else if(dept=="IT")
                {
                    ofstream write;
                    write.open("IT.dat", ios::app);
                    write<<e2.id;
                    write<<e2.name;
                    write<<e2.address;
                    write<<e2.dept;
                    write<<e2.phone;
                    write<<e2.age;
                }
            }
        }
};
int main()
{
    Employee e1;
    int n;
    cout<<"how many employee you want to Enter: ";
    cin>>n;
    while(n--)
    {
       e1.setData();
       e1.save_to_file();
    }
    return 0;
}