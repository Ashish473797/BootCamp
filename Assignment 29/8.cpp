//Create a Rupee class and convert it into int. And Display it.
#include<iostream>
using namespace std;
class Rupee
{
    int x;
    public:
    Rupee(int a)
    {
        x=a;
    }
    operator int()
    {
        return x;
    }
};
int main()
{
    Rupee r = 10;
    int x = (int)r;
    cout<<x;
    return 0;
}