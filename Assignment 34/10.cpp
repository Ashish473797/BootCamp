/*Write a C++ program to create a file which has information Name, Account number,
Balance and perform following operations:
a. Add record
b. Display content of file
c. Display name of person having balance > 10,000 */
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class Account
{
    protected:
        string name;
        long long acc_no;
        float balance;
    public:
        void showData()
        {
            cout<<"\n----------------------------\n";
            cout<<"Name          : "<<name<<endl;
            cout<<"Account Number: "<<acc_no<<endl;
            cout<<"Balance       : "<<balance<<endl;
            cout<<"----------------------------\n";
        }
        void add_record()
        {
            Account a;
            ofstream write;
            write.open("Account.txt", ios::app);
            cout<<"Enter Name          : ";
            cin>>a.name;
            cout<<"Enter Account Number: ";
            cin>>a.acc_no;
            cout<<"Enter Balance       : ";
            cin>>a.balance;
            write<<a.name<<endl;
            write<<a.acc_no<<endl;
            write<<a.balance<<endl<<endl;
            write.close();
        }
        void dis_record()
        {
            Account a2;
            ifstream read;
            read.open("Account.txt", ios::in);
            read.seekg(0,ios_base::beg);
            while(!read.eof())
            {
                getline(read, a2.name);
                read>>a2.acc_no;
                read>>a2.balance;
                a2.showData();
            }
            read.close();
        }
        void dis_greater_then(int n)
        {
            Account a3;
            ifstream read;
            read.open("Account.txt", ios::in);
            read.seekg(0,ios_base::beg);
            while(!read.eof())
            {
                getline(read, a3.name);
                read>>a3.acc_no;
                read>>a3.balance;
                if(a3.balance>n)
                a3.showData();
            }
            read.close();
        }
};
int main()
{
    Account a1;
    while(1)
    {
        int choice;
        cout<<"Enter 1 to add record"<<endl;
        cout<<"Enter 2 to display all record"<<endl;
        cout<<"Enter 3 to display all record greater then Specified amount"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            a1.add_record();
            break;
        case 2:
            a1.dis_record();
            break;
        case 3:
            int amount;
            cout<<"Enter Amount: ";
            cin>>amount;
            a1.dis_greater_then(amount);
            break;
        case 4:
            exit(0);    
        default:
            cout<<"Invalid input!"<<endl;
            break;
        }
    }
    return 0;
}