/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;
class Time
{
    int hr;
    int min;
    int sec;
    public:
    void setData(int h=0,int m=0,int s=0)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void printData()
    {
        cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    }
};
int main()
{
    Time t1;
    t1.setData(5,3,20);
    t1.printData();
    return 0;
}