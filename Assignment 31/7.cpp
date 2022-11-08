/*Write class declarations and member function definitions for a C++ base class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.*/
#include<iostream>
using namespace std;
class Employee
{
    protected: 
    int empCode;
    char name[32];
    public:
    void setEm()
    {
        cout<<"Enter Employee Id  : ";
        cin.ignore();
        cin>>empCode;
        cout<<"Enter Employee Name: ";
        cin.ignore();
        cin.getline(name,32);
    }
};
class Fulltime : public Employee
{
    protected:
    int dailyRate;
    int noOfDay;
    int salary;
    public:
    void setFull()
    {
        cout<<"Enter Daily Rate    : ";
        cin.ignore();
        cin>>dailyRate;
        cout<<"Enter Number of Days: ";
        cin.ignore();
        cin>>noOfDay;
        salary = dailyRate*noOfDay;
    }
    void showFull()
    {
        cout<<"\n-------------------------------\n";
        cout<<"\nEmployee Id is     : "<<empCode;
        cout<<"\nEmployee Name is   : "<<name;
        cout<<"\nEmployee Salary is : "<<salary;
        cout<<"\nEmploye Status is  :  FullTime";
        cout<<"\n-------------------------------\n";
    }
    int getfullid()
    {
        return empCode;
    }
};
class Parttime : public Employee
{
    protected:
    int noOfHour;
    int hourRate;
    int salary;
    public:
    void setPart()
    {
        cout<<"Enter Hourly Rate    : ";
        cin.ignore();
        cin>>hourRate;
        cout<<"Enter Number of Hours: ";
        cin.ignore();
        cin>>noOfHour;
        salary = noOfHour*hourRate;
    }
    void showPart()
    {
        cout<<"\n-------------------------------";
        cout<<"\nEmployee Id is     : "<<empCode;
        cout<<"\nEmployee Name is   : "<<name;
        cout<<"\nEmployee Salary is : "<<salary;
        cout<<"\nEmploye Status is  :  PartTime";
        cout<<"\n-------------------------------\n";
    }
    int getpartid()
    {
        return empCode;
    }
};
int main()
{
    Fulltime frange[50];
    Parttime prange[50];
    int n,var1=0,var2=0;
    while(1)
    {
        cout<<"\npress 1 to Enter the record  : "<<endl;
        cout<<"press 2 to Display the record: "<<endl;
        cout<<"press 3 to Search the record : "<<endl;
        cout<<"press 4 to Exit from menu    : "<<endl;
        cout<<"press your choice            : ";
        cin>>n;
    
        switch (n)
        {
        int x;
        case 1:
            cout<<"\nPress 1 for Full-Time Employee : "<<endl;
            cout<<"Press 2 for Part-Time Employee : "<<endl;
            cout<<"Press your choice              : ";
            cin>>x;
            switch (x)
            {
            case 1:
                frange[var1].setEm();
                frange[var1].setFull();
                var1++;
                break;
            case 2:
                prange[var2].setEm();
                prange[var2].setPart(); 
                var2++;   
                break;
            default:
                cout<<"Invalid Input!"<<endl;
            break;
            }
            break;

        case 2:
            for(int i=0; i<var1; i++)
            {
                frange[i].showFull();
            }
            for(int i=0; i<var2; i++)
            {
                prange[i].showPart();
            }
            break;

        case 3:
            int id;
            cout<<"Enter employee id : ";
            cin>>id;
            for(int i=0; i<var1; i++)
            {
                if(frange[i].getfullid()==id)
                {
                    frange[i].showFull();
                }
                if(prange[i].getpartid()==id)
                {
                    prange[i].showPart();
                }
            }
            break;

        case 4:
            exit(0);

        default:
            cout<<"Invalid Input!";
            break;
        }
    }
    return 0;
}