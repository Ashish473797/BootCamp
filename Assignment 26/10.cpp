// Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result
#include<iostream>
using namespace std;
class StaticCount
{
    static int count;
    public:
    static void counter()
    {
        count++;
    }
    static void showCounter()
    {
        cout<<count;
    }
};
int StaticCount::count=0;
int main()
{
    for(int i=1;i<=3;i++)
    StaticCount::counter();
    StaticCount::showCounter();
}