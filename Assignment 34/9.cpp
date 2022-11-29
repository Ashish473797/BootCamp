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
#include<cstring>
using namespace std;
class Employee
{
    protected:
        int id;
        string name, address, dept;
        long long phone;
        int age;
    public:
        void setData(int id, string name, string address, string dept, long long phone, int age)
        {
            Employee::id = id;
            Employee::name = name;
            Employee::address = address;
            Employee::dept = dept;
            Employee::phone = phone;
            Employee::age = age;
        }
        void save_to_admin()
        {
            ofstream writeAdmin;
            writeAdmin.open("Admin.txt", ios::app);
            writeAdmin<<id<<endl;
            writeAdmin<<name<<endl;
            writeAdmin<<address<<endl;
            writeAdmin<<dept<<endl;
            writeAdmin<<phone<<endl;
            writeAdmin<<age<<endl;
            writeAdmin.close();
        }
        void save_to_sales()
        {
            ofstream writeSales;
            writeSales.open("Sales.txt", ios::app);
            writeSales<<id<<endl;
            writeSales<<name<<endl;
            writeSales<<address<<endl;
            writeSales<<dept<<endl;
            writeSales<<phone<<endl;
            writeSales<<age<<endl;
            writeSales.close();
        }
        void save_to_production()
        {
            ofstream writePro;
            writePro.open("Production.txt", ios::app);
            writePro<<id<<endl;
            writePro<<name<<endl;
            writePro<<address<<endl;
            writePro<<dept<<endl;
            writePro<<phone<<endl;
            writePro<<age<<endl;
            writePro.close();
        }
        void save_to_it()
        {
            ofstream writeIt;
            writeIt.open("IT.txt", ios::app);
            writeIt<<id<<endl;
            writeIt<<name<<endl;
            writeIt<<address<<endl;
            writeIt<<dept<<endl;
            writeIt<<phone<<endl;
            writeIt<<age<<endl;
            writeIt.close();
        }
};
int main()
{
    int id;
    string name, address, dept;
    long long phone;
    int age;
    Employee e1;
    ifstream read;
    read.open("Employee.txt", ios::in);
    while(!read.eof())
    {
        read>>id;
        read.ignore();
        getline(read,name);
        getline(read,address);
        getline(read,dept);
        read>>phone;
        read>>age;
        e1.setData(id, name, address, dept, phone, age);
        if(dept.compare("Admin"))
        {
            e1.save_to_admin();
        }
        if(dept.compare("Sales"))
        {
            e1.save_to_sales();
        }
        if(dept.compare("Production"))
        {
            e1.save_to_production();
        }
        if(dept.compare("IT"))
        {
            e1.save_to_it();
        }
    }
    read.close();
    return 0;
}