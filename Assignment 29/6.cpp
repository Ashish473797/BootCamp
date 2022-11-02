//Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in int ) to Time class.
#include<iostream>
using namespace std;
class Time
{
    int hour,minut,second;
    public:
    Time(int i)
    {
        hour=i,minut=0,second=0;
    }
    void setData(int h,int m,int s)
    {
        hour = h;
        minut = m;
        second = s;
    }
    void display()
    {
        cout<<hour<<":"<<minut<<":"<<second<<endl;
    }
};
int main()
{
 int duration;
 cout<<"Enter time duration in minutes: ";
 cin>>duration;
 Time t1 = (Time)duration;
 t1.display();
 return 0;
}