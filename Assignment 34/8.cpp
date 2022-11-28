//A file 'Employee.txt' contains empno and empname. Write a C++ program to add and read contents 
//of this file and search for an employee whose name is 'XYZ'.
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Employee
{
    protected:
        int empno;
        string str;
    public:
        void add()
        {
            cout<<"Enter Employee number: ";
            cin>>empno;
            cout<<"Enter Employee Name: ";
            cin.ignore();
            getline(cin,str);
            ofstream write;
            write.open("demo4.txt", ios::app);
            write<<endl<<empno<<endl<<str<<endl;
            write.close();
            cout<<endl<<"record added"<<endl<<endl;
        }
        void search(int id)
        {
            ifstream read;
            read.open("demo4.txt", ios::in);
            Employee e1;
            while(!read.eof())
            {
                read>>e1.empno;
                read.ignore();
                getline(read,str);
                if(id==e1.empno)
                {
                    display();
                    break;
                }
            }
        }
        void display()
        {
            cout<<"Employee Number is "<<empno<<endl;
            cout<<"Employee Name is "<<str<<endl;
        }
};
int main()
{
    while(1)
    {
        int n;
        cout<<"Enter 1 to add Employee"<<endl;
        cout<<"Enter 2 to search an Employee"<<endl;
        cout<<"Enter 0 to Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>n;
        Employee e;
        int id;
        switch (n)
        {
        case 1:
            e.add();
            break;
        case 2:
            cout<<"Enter employee number: ";
            cin>>id;
            e.search(id);
        case 0:
            exit(0);
        default:
            cout<<"invalid input!"<<endl;
            break;
        }
    }
    return 0;
}