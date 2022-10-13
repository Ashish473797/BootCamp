/*Define a class Time to represent a time with instance variables h,m and s to store hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include<iostream>
using namespace std;

class Time
{
    int h=0,m=0,s=0;
    public:
    void setData(int hour,int min,int sec)
    {
        h=hour;
        m=min;
        s=sec;
    }
    void showData()
    {
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
    void normalize()
    {
        while(s>60)
        {
            s=s-60;
            m=m+1;
        }
        while(m>60)
        {
            m=m-60;
            h=h+1;
        }
    }
    Time add(Time t)
    {
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setData(12,60,61);
    t2.setData(23,50,30);
    t1.showData();
    t2.showData();
    t3=t1.add(t2);
    t3.showData();
    return 0;
}