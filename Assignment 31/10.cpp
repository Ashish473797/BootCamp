/*Consider two base classes worker(int code, char name, float salary), officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base classes.
Write necessary member functions.*/
#include<iostream>
#include<cstring>
using namespace std;
class Worker
{
    protected:
        int code;
        char name[32];
        float salary;
    public:
        Worker(){}
        Worker(int c, char *n, float s)
        {
            code = c;
            strcpy(name,n);
            salary = s;
        }  
        void putw()
        {
            cout<<"\n Code           : "<<code;
            cout<<"\n Name           : "<<name;
            cout<<"\n Salary         : "<<salary;        
        }  
};
class Officer
{
    protected:
        float DA, HRA;
    public:
        Officer(){}
        Officer(float d,float h)
        {
            DA=d;
            HRA=h;
        }
        void puto()
        {
            cout<<"\n DA              : "<<DA;
            cout<<"\n HRA             : "<<HRA;
        }
};
class Manager : public Officer, public Worker
{
    protected:
        float TA;
        float gsal;
    public:
        Manager(){}
        Manager(int c,char *n,float s,float d,float h) : Worker(c,n,s), Officer(d,h)
        {

        }
        void putm()
        {
            putw();
            puto();
            TA = 0.10 * salary;
            cout<<"\n TA                  : "<<TA;
            gsal = DA + HRA + TA + salary;
            cout<<"\n Gross Salary        : "<<gsal;
        }
};
int main()
{
    int cnt, i;
    cout<<"\n Enter Manager Count : ";
    cin>>cnt;
    Manager *m;
    m = new Manager[cnt];
    for(i=0; i<cnt; i++)
    {
        cout<<"\n Enter Worker Information for "<<i+1<<"\n";
        cout<<"\n-------------------------------";
        cout<<"\n Enter Code    : ";
        int c;
        cin>>c;
        cout<<"\n Enter Name    : ";
        char n[32];
        cin.ignore();
        cin.getline(n,32);
        cout<<"\n Enter Salary  : ";
        float s;
        cin>>s;
        cout<<"\n Enter DA      : ";
        float d;
        cin>>d;
        cout<<"\n Enter HRA     : ";
        float h;
        cin>>h;
        m[i] = Manager(c,n,s,d,h);
    }
    for(i=0; i<cnt; i++)
    {
        cout<<"\n------------------------------";
        cout<<"\n Manager Information";
        cout<<"\n------------------------------";
        m[i].putm();
    }
    return 0;
}