// Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
    static int count;
    public:
    Counter() { count++; }
    static void showCounter()
    {
        cout<<count;
    }
};
int Counter::count=0;
int main()
{
    Counter c1,c2;
    Counter::showCounter();
    return 0;
}