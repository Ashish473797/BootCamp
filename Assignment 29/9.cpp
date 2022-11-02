//Create a Dollar class and add necessary functions to support int to Dollar type conversion.
#include<iostream>
using namespace std;
class Dollar
{
    int d;
    public:
    Dollar(){ d = 0;}
    Dollar(int x)
    {
        d=x;
    }
    void display()
    {
        cout<<d<<" dollar";
    }
};
int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}
