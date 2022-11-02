/*Create two class Time and Minute and add required getter and setter including constructors. 
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.*/
#include<iostream>
using namespace std;
class Time
{
    int hour,minut,second;
    public:
    Time(int h,int m,int s)
    {
       hour = h;
       minut = m;
       second = s;
    }
    int getMin()
    {
        return minut;
    }
    void display()
    {
        cout<<hour<<":"<<minut<<":"<<second<<endl;
    }
};
class Minut
{
    int minut;
    public:
    Minut(){ minut = 0; }
    Minut(Time t)
    {
        minut = t.getMin();
    }
    void display()
    {
        cout<<minut<<endl;
    }
};
int main()
{
    Time t1(2,30,55);
    t1.display();
    Minut m1;
    m1.display();
    m1=(Minut)t1; // Fetch minute from time
    t1.display();
    m1.display();
    return 0;
}
