/*In a bank, different customers have savings account. Some customers may have taken a loan from the bank. 
So bank always maintain information about bank depositors and borrowers. Design a Base class Customer (name, phone-number). 
Derive a class Depositor(accno, balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) 
from Depositor. Write necessary member functions to read and display the details of ‘n’ customers.*/
#include<iostream>
using namespace std;
class Customer
{
    protected:
        char name[32];
        long long phoneNo;
    public:
        void inputCus()
        {
            cout<<"\n Enter Customer Name       :  ";
            cin>>name;
            cout<<"\n Enter Customer Phone No.  :  ";
            cin>>phoneNo;
        }
        void disCus()
        {
            cout<<"\n Details of Customer \n";
            cout<<"\n ------------------------------------------------\n";
            cout<<"\n Customer Name             :  "<<name;
            cout<<"\n Customer Phone No.        :  "<<phoneNo;    
        }

};
class Deposite : public Customer
{
    protected:
    int accountNo;
    int balance;
    public:
    void inputDep()
    {
        cout<<"\n Enter Customer A/C No.        :  ";
        cin>>accountNo;
        cout<<"\n Enter Balance                 :  ";
        cin>>balance;
    }
    void disDep()
    {
        cout<<"\n Customer A/C No.              :  "<<accountNo;
        cout<<"\n Balance                       :  "<<balance;
        cout<<"\n ------------------------------------------------\n";
    }
};
class Barrow : public Deposite
{
    protected:
    int loanNo, loanAmt;
    public:
    void inputBrw()
    {
        cout<<"\n Enter Loan No.               :  ";
        cin>>loanNo;
        cout<<"\n Enter Loan Amount            :  ";
        cin>>loanAmt;
        cout<<"\n --------------------------------------------------\n";
    }
    void disBrw()
    {
        cout<<"\n Loan No.                     :  "<<loanNo;
        cout<<"\n Loan Amount                  :  "<<loanAmt;
        cout<<"\n --------------------------------------------------\n";
    }
};
int main()
{
    Barrow *b1;
    int n,i;
    cout<<"\n Enter No. of Customer Details You Want  :  ";
    cin>>n;
    b1 = new Barrow[n];
    for(i=0; i<n; i++)
    {
        b1[i].inputCus();
        b1[i].inputDep();
        b1[i].inputBrw();
    }
    for(i=0; i<n; i++)
    {
        b1[i].disCus();
        b1[i].disDep();
        b1[i].disBrw();
    }
    return 0;
}